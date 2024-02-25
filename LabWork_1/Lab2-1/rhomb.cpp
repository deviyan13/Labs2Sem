#include "rhomb.h"

Rhomb::Rhomb() {
    setTransformOriginPoint(boundingRect().width() / 2.0, boundingRect().height() / 2.0);
    points[0] = QPoint(0, 40);
    points[1] = QPoint(70, 0);
    points[2] = QPoint(140, 40);
    points[3] = QPoint(70, 80);
}

QRectF Rhomb::boundingRect() const {
    return QRectF(0, 0, 140, 80);
}

void Rhomb::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) {
    painter->setBrush(Qt::yellow);
    QPolygonF pol;
    pol << points[0] << points[1] << points[2] << points[3];
    painter->drawPolygon(pol);

    Q_UNUSED(option)
    Q_UNUSED(widget)
}

QPainterPath Rhomb::shape() const {
    QPainterPath path;
    QPolygonF pol;
    pol << points[0] << points[1] << points[2] << points[3];
    path.addPolygon(pol);
    return path;
}
