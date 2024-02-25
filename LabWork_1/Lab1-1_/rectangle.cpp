#include "rectangle.h"
#include <QPainter>

Rectangle::Rectangle()
{
    speedMoving = 5;
}

QRectF Rectangle::boundingRect() const
{
    // прямоугольник, охватывающий фигуру
    return QRectF(0, 0, 200, 100);
}

void Rectangle::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    QColor color;
    color.setRgb(255, 0, 255);
    painter->setBrush(color);
    painter->drawRect(boundingRect());
}

void Rectangle::setSpeed(qreal newSpeed)
{
    speedMoving = newSpeed;
}

qreal Rectangle::getSpeed() const
{
    return speedMoving;
}

void Rectangle::addSpeed()
{
    qreal newSpeed = getSpeed() + qreal(1);
    setSpeed(newSpeed);
}

void Rectangle::deductSpeed()
{
    qreal newSpeed = getSpeed() + qreal(-1);
    setSpeed(newSpeed);
}

void Rectangle::moveRect()
{
    if(x() + speedMoving >= 800)
    {
        setPos(x() - 800 - boundingRect().width(), y());
    }
    else if(x() + speedMoving < 0 - boundingRect().width())
    {
        setPos(x() + 800 + boundingRect().width(), y());
    }
    else setPos(x() + speedMoving, y());
}
