#ifndef SQUARE_H
#define SQUARE_H

#include "polygon.h"

class Square : public Polygon
{
public:
    Square();

    QRectF boundingRect() const override;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) override;

private:
    QPoint points[4];
};

#endif // SQUARE_H
