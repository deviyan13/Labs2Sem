#include "rectangle.h"

Rectangle::Rectangle() {
    setTransformOriginPoint(boundingRect().width() / 2.0, boundingRect().height() / 2.0);
    points[0] = QPoint(0, 0);
    points[1] = QPoint(100, 0);
    points[2] = QPoint(100, 50);
    points[3] = QPoint(0, 50);
}

QRectF Rectangle::boundingRect() const {
    return QRectF(0, 0, 100, 50);
}

void Rectangle::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) {
    painter->setBrush(Qt::green);
    QPolygonF pol;
    pol << points[0] << points[1] << points[2] << points[3];
    painter->drawPolygon(pol);

    Q_UNUSED(option)
    Q_UNUSED(widget)
}
