#ifndef SQUARE_H
#define SQUARE_H

#include "polygon.h"

class Square : public Polygon
{

public:
    Square(QPointF p1, QPointF p2, QPointF p3, QPointF p4);
    QRectF boundingRect() const override;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) override;

private:
    QPolygonF square;
};

#endif // SQUARE_H
