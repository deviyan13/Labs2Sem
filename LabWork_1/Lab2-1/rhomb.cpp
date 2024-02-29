#include "rhomb.h"

Rhomb::Rhomb(QPointF p1, QPointF p2, QPointF p3, QPointF p4)
{
    rhomb = (QPolygonF() << p1 << p2 << p3 << p4);
    setTransformOriginPoint(boundingRect().width() / 2.0, boundingRect().height() / 2.0);

    const int sides = 4;

    for(int i = 0; i < sides - 1; i++)
    {
        Area += (rhomb[i].x() * rhomb[i + 1].y() - rhomb[i].y() * rhomb[i + 1].x());
    }
    Area += (rhomb[sides - 1].x() * rhomb[0].y() - rhomb[sides - 1].y() * rhomb[0].x());
    Area = abs(Area) / 2;

    Perimetr += QLineF(p1, p2).length() * 4;

    // Area = 5600;
    // Perimetr = 322.49031;
}

QRectF Rhomb::boundingRect() const {
    return rhomb.boundingRect();
}

void Rhomb::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) {
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
