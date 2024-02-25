#ifndef STAR5_H
#define STAR5_H

#include "polygon.h"

class Star5 : public Polygon
{
public:
    Star5();
    QRectF boundingRect() const override;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) override;
    QPainterPath shape() const override;

private:
    QPoint points[10];
};

#endif // STAR5_H
