#include "rectangle.h"
#include <QPainter>
#include <QTimer>

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
    if(speedMoving < 20)
    {
        qreal newSpeed = getSpeed() + qreal(1);
        setSpeed(newSpeed);
    }
    else
    {
        QMessageBox message;
        message.setText("Не нарушаем! У тебя и так педаль в пол!");
        message.setIcon(QMessageBox::Warning);

        message.setModal(true);
        message.exec();
    }
}

void Rectangle::deductSpeed()
{
    if(speedMoving > 1)
    {
        qreal newSpeed = getSpeed() + qreal(-1);
        setSpeed(newSpeed);
    }
    else
    {
        speedMoving = 0;
        emit stop();
    }
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
