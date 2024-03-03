#include "rhomb.h"

Rhomb::Rhomb(QPointF p1, QPointF p2, QPointF p3, QPointF p4)
{
    rhomb << p1 << p2 << p3 << p4;

    const int sides = 4;

    for(int i = 0; i < sides - 1; i++)
    {
        Area += (rhomb[i].x() * rhomb[i + 1].y() - rhomb[i].y() * rhomb[i + 1].x());
    }
    Area += (rhomb[sides - 1].x() * rhomb[0].y() - rhomb[sides - 1].y() * rhomb[0].x());
    Area = abs(Area) / 2;

    Perimetr += QLineF(p1, p2).length() * 4;



    qreal x = 0, y = 0;

    for(int i = 0; i < sides; i++)
    {
        x += rhomb[i].x();
        y += rhomb[i].y();
    }

    x /= sides * 1.0;
    y /= sides * 1.0;


    originPoint = QPointF(x, y);
    setTransformOriginPoint(originPoint);
}

QRectF Rhomb::boundingRect() const {
    return rhomb.boundingRect();
}

void Rhomb::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) {

    // if (isSelected()) {
    //     // Отрисовываем элемент с особой стилистикой, если он выбран
    //     painter->setBrush(Qt::white);
    // } else {
    //     painter->setBrush(Qt::blue);
    // }
    painter->setBrush(Qt::yellow);
    painter->drawPolygon(rhomb);

    Q_UNUSED(option)
    Q_UNUSED(widget)
}

QPainterPath Rhomb::shape() const {
    QPainterPath path;
    path.addPolygon(rhomb);
    return path;
}
