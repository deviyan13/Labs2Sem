#include "hexagon.h"

Hexagon::Hexagon() {
    setTransformOriginPoint(boundingRect().width() / 2.0, boundingRect().height() / 2.0);
    points[0] = QPoint(0, 50);
    points[1] = QPoint(25, 0);
    points[2] = QPoint(75, 0);
    points[3] = QPoint(100, 50);
    points[4] = QPoint(75, 100);
    points[5] = QPoint(25, 100);
}

QRectF Hexagon::boundingRect() const {
    return QRectF(0, 0, 100, 100);
}

void Hexagon::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) {
    painter->setBrush(Qt::black);
    QPolygonF pol;
    pol << points[0] << points[1] << points[2] << points[3] << points[4] << points[5];
    painter->drawPolygon(pol);

    Q_UNUSED(option)
    Q_UNUSED(widget)
}

QPainterPath Hexagon::shape() const
{
    QPainterPath path;
    QPolygonF pol;
    pol << points[0] << points[1] << points[2] << points[3] << points[4] << points[5];
    path.addPolygon(pol);
    return path;
}
