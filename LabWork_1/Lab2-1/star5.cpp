#include "star5.h"

Star5::Star5()
{
    setTransformOriginPoint(boundingRect().width() / 2.0, boundingRect().height() / 2.0);
    points[0] = QPoint(0,54);
    points[1] = QPoint(62,54);
    points[2] = QPoint(80,0);
    points[3] = QPoint(98,54);
    points[4] = QPoint(160,54);
    points[5] = QPoint(110,90);
    points[6] = QPoint(130,148);
    points[7] = QPoint(80,112);
    points[8] = QPoint(30,148);
    points[9] = QPoint(50,90);
}

QRectF Star5::boundingRect() const
{
    return QRectF(0, 0, 160, 148);
}

void Star5::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->setBrush(Qt::lightGray);
    QPolygonF pol;
    pol << points[0] << points[1] << points[2] << points[3] << points[4] << points[5] << points[6] << points[7] << points[8] << points[9];
    painter->drawPolygon(pol);

    Q_UNUSED(option)
    Q_UNUSED(widget)
}

QPainterPath Star5::shape() const {
    QPainterPath path;
    QPolygonF pol;
    pol << points[0] << points[1] << points[2] << points[3] << points[4] << points[5] << points[6] << points[7] << points[8] << points[9];
    path.addPolygon(pol);
    return path;
}
