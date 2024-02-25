#include "star8.h"

Star8::Star8()
{
    setTransformOriginPoint(boundingRect().width() / 2.0, boundingRect().height() / 2.0);
    points[0] = QPoint(0,80);
    points[1] = QPoint(40,45);
    points[2] = QPoint(40,0);
    points[3] = QPoint(80,25);
    points[4] = QPoint(120,0);
    points[5] = QPoint(120,45);
    points[6] = QPoint(160,80);
    points[7] = QPoint(120,115);
    points[8] = QPoint(120,160);
    points[9] = QPoint(80,135);
    points[10] = QPoint(40,160);
    points[11] = QPoint(40,115);
    points[12] = QPoint(160,80);
    points[13] = QPoint(120,115);
    points[14] = QPoint(120,160);
    points[15] = QPoint(80,135);
}

QRectF Star8::boundingRect() const
{
    return QRectF(0, 0, 160, 160);
}

void Star8::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->setBrush(QColor(qRgb(130,100,90)));
    QPolygonF pol;
    pol << points[0] << points[1] << points[2] << points[3] << points[4] << points[5] << points[6] << points[7] << points[8] << points[9]
        << points[10] << points[11] << points[12] << points[13] << points[14] << points[15];
    painter->drawPolygon(pol);

    Q_UNUSED(option)
    Q_UNUSED(widget)
}

QPainterPath Star8::shape() const
{
    QPainterPath path;
    QPolygonF pol;
    pol << points[0] << points[1] << points[2] << points[3] << points[4] << points[5] << points[6] << points[7] << points[8] << points[9]
        << points[10] << points[11] << points[12] << points[13] << points[14] << points[15];
    path.addPolygon(pol);
    return path;
}
