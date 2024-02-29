#ifndef STAR5_H
#define STAR5_H

#include "polygon.h"

class Star5 : public Polygon
{
public:
    Star5(double, double);
    QRectF boundingRect() const override;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) override;
    QPainterPath shape() const override;

private:
    QPolygonF star5;
};

#endif // STAR5_H
