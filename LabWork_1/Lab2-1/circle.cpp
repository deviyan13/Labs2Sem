#include "circle.h"

Circle::Circle(double newRadius) {
    radius = newRadius;

    Area = radius * radius * M_PI;
    Perimetr = 2 * M_PI * radius;

    originPoint = QPointF(radius, radius);
    setTransformOriginPoint(originPoint);
}

QRectF Circle::boundingRect() const {
    return QRectF(0, 0, radius * 2, radius * 2);
}

void Circle::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) {
    painter->setBrush(Qt::magenta);

    painter->drawEllipse(0, 0, 2 * radius, 2 * radius);

    Q_UNUSED(option)
    Q_UNUSED(widget)
}

QPainterPath Circle::shape() const {
    QPainterPath path;
    path.addEllipse(boundingRect());
    return path;
}
