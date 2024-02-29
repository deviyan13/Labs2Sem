#include "rectangle.h"

Rectangle::Rectangle(QPointF p1, QPointF p2, QPointF p3, QPointF p4)
{
    rectangle = (QPolygonF() << p1 << p2 << p3 << p4);
    setTransformOriginPoint(boundingRect().width() / 2.0, boundingRect().height() / 2.0);

    const int sides = 4;

    for(int i = 0; i < sides - 1; i++)
    {
        Area += (rectangle[i].x() * rectangle[i + 1].y() - rectangle[i].y() * rectangle[i + 1].x());
    }
    Area += (rectangle[sides - 1].x() * rectangle[0].y() - rectangle[sides - 1].y() * rectangle[0].x());
    Area = abs(Area) / 2;

    Perimetr += QLineF(p1, p2).length() * 2 + QLineF(p2, p3).length() * 2;
}

QRectF Rectangle::boundingRect() const {
    return rectangle.boundingRect();
}

void Rectangle::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) {
    painter->setBrush(Qt::green);
    painter->drawPolygon(rectangle);

    Q_UNUSED(option)
    Q_UNUSED(widget)
}

