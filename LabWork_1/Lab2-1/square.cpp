#include "square.h"

Square::Square(QPointF p1, QPointF p2, QPointF p3, QPointF p4)
{
    square << p1 << p2 << p3 << p4;

    const int sides = 4;

    for(int i = 0; i < sides - 1; i++)
    {
        Area += (square[i].x() * square[i + 1].y() - square[i].y() * square[i + 1].x());
    }
    Area += (square[sides - 1].x() * square[0].y() - square[sides - 1].y() * square[0].x());
    Area = abs(Area) / 2;

    Perimetr += QLineF(p1, p2).length() * 4;





    qreal x = 0, y = 0;

    for(int i = 0; i < sides; i++)
    {
        x += square[i].x();
        y += square[i].y();
    }

    x /= sides * 1.0;
    y /= sides * 1.0;


    originPoint = QPointF(x, y);
    setTransformOriginPoint(originPoint);

}

QRectF Square::boundingRect() const {
    return square.boundingRect();
}

void Square::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) {
    painter->setBrush(Qt::red);
    painter->drawPolygon(square);

    Q_UNUSED(option)
    Q_UNUSED(widget)
}
