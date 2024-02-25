#include "triangle.h"

Triangle::Triangle() {
    setTransformOriginPoint(boundingRect().width() / 2.0, boundingRect().height() / 2.0);

    points[0] = QPoint(0, 70);
    points[1] = QPoint(30, 0);
    points[2] = QPoint(60, 70);
}

QRectF Triangle::boundingRect() const {
    return QRectF(0, 0, 60, 70);
}

void Triangle::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) {
    painter->setBrush(Qt::blue);
    QPolygonF pol;
    pol << points[0] << points[1] << points[2];
    painter->drawPolygon(pol);

    Q_UNUSED(option)
    Q_UNUSED(widget)
}

QPainterPath Triangle::shape() const {
    QPainterPath path;
    QPolygonF pol;
    pol << points[0] << points[1] << points[2];
    path.addPolygon(pol);
    return path;
}
