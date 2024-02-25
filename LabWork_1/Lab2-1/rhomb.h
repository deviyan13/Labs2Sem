#ifndef RHOMB_H
#define RHOMB_H

#include "polygon.h"

class Rhomb: public Polygon
{
public:
    Rhomb();
    QRectF boundingRect() const override;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) override;
    QPainterPath shape() const override;

private:
    QPoint points[4];
};


#endif // RHOMB_H
