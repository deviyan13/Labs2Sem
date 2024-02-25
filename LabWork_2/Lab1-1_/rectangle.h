#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <QObject>
#include <QGraphicsItem>
#include <QGraphicsScene>
#include <QGraphicsView>

class Rectangle : public QObject, public QGraphicsItem
{
    Q_OBJECT

public:
    Rectangle();

    void addSpeed();
    void deductSpeed();
    void setSpeed(qreal newSpeed);
    qreal getSpeed() const;

protected:
    QRectF boundingRect() const override;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) override;

private:
    qreal speedMoving = 0;

public slots:
    void moveRect();
};

#endif // RECTANGLE_H
