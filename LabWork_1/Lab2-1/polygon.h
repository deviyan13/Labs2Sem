#ifndef POLYGON_H
#define POLYGON_H

#include "shape.h"

class Polygon : public Shape
{
public:
    Polygon();

    virtual QRectF boundingRect() const override = 0;
    virtual void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) override = 0;

    //virtual int getArea() = 0;
    //virtual int getPerimetr() = 0;
    //virtual QPoint getCenter() = 0;
};

#endif // POLYGON_H
