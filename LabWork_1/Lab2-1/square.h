#ifndef SQUARE_H
#define SQUARE_H

#include "polygon.h"

class Square : public Polygon
{

public:
    Square(qreal side);
    QRectF boundingRect() const override;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) override;

private:
    QPolygonF square;
};

#endif // SQUARE_H
