#include "square.h"

Square::Square()
{
    setTransformOriginPoint(boundingRect().width() / 2.0, boundingRect().height() / 2.0);
    points[0] = QPoint(0, 0);
    points[1] = QPoint(50, 0);
    points[2] = QPoint(50, 50);
    points[3] = QPoint(0, 50);
}

QRectF Square::boundingRect() const {
    return QRectF(0, 0, 50, 50);
}

void Square::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) {
    painter->setBrush(Qt::red);
    QPolygonF pol;
    pol << points[0] << points[1] << points[2] << points[3];
    painter->drawPolygon(pol);

    Q_UNUSED(option)
    Q_UNUSED(widget)
}
