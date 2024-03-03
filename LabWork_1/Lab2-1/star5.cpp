#include "star5.h"

Star5::Star5(double externalRadius, double internalRadius)
{
    //setTransformOriginPoint(boundingRect().width() / 2.0, boundingRect().height() / 2.0);

    const int sides = 10;

    for (int i = 0; i < sides; ++i) {
        qreal angle = 2 * M_PI * i / sides - M_PI / 10;
        qreal x;
        qreal y;

        if(i % 2 == 0)
        {
            x = externalRadius * cos(angle);
            y = externalRadius * sin(angle);
        }

        else
        {
            x = internalRadius * cos(angle);
            y = internalRadius * sin(angle);
        }

        star5 << QPointF(x, y);
    }

    for(int i = 0; i < sides - 1; i++)
    {
        Area += (star5[i].x() * star5[i + 1].y() - star5[i].y() * star5[i + 1].x());
    }
    Area += (star5[sides - 1].x() * star5[0].y() - star5[sides - 1].y() * star5[0].x());
    Area = abs(Area) / 2;

    Perimetr += QLineF(star5[0], star5[1]).length() * sides;


    qreal x = 0, y = 0;

    for(int i = 0; i < sides; i++)
    {
        x += star5[i].x();
        y += star5[i].y();
    }

    x /= sides * 1.0;
    y /= sides * 1.0;


    originPoint = QPointF(x, y);
    setTransformOriginPoint(originPoint);
}

QRectF Star5::boundingRect() const
{
    return star5.boundingRect();
}

void Star5::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->setBrush(Qt::lightGray);
    painter->drawPolygon(star5);

    Q_UNUSED(option)
    Q_UNUSED(widget)
}

QPainterPath Star5::shape() const {
    QPainterPath path;
    path.addPolygon(star5);
    return path;
}
