#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "polygon.h"


class Rectangle : public Polygon
{
public:
    Rectangle(QPointF p1, QPointF p2, QPointF p3, QPointF p4);
    QRectF boundingRect() const override;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) override;

    // double getArea() override;
    // double getPerimetr() override;
    //QPoint getCenter() ;

private:
    QPolygonF rectangle;
};


#endif // RECTANGLE_H
