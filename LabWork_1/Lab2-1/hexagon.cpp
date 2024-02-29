#include "hexagon.h"

Hexagon::Hexagon(double radius) {
    setTransformOriginPoint(boundingRect().width() / 2.0, boundingRect().height() / 2.0);

    const int sides = 6;

    for (int i = 0; i < 6; ++i) {
        qreal angle = 2 * M_PI * i / sides;
        qreal x = radius * cos(angle);
        qreal y = radius * sin(angle);
        hexagon << QPointF(x, y);
    }

    Area = 2.59808 * radius * radius;
    Perimetr = radius * 6;
}

QRectF Hexagon::boundingRect() const {
    return hexagon.boundingRect();
}

void Hexagon::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) {

    painter->setBrush(Qt::black);
    painter->drawPolygon(hexagon);

    Q_UNUSED(option)
    Q_UNUSED(widget)
}

QPainterPath Hexagon::shape() const
{
    QPainterPath path;
    path.addPolygon(hexagon);
    return path;
}
