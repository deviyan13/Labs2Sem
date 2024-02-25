#ifndef SHAPE_H
#define SHAPE_H

#include <QGraphicsItem>
#include <QPainter>
#include <QRectF>
#include <QPointF>
#include <QCursor>
#include <QGraphicsSceneMouseEvent>
#include <QGraphicsSceneWheelEvent>
#include <QKeyEvent>
#include <QAction>
#include <QSlider>
#include <QMenu>
#include<QAction>

class Shape : public QGraphicsItem {
public:
    Shape(QGraphicsItem *parent = nullptr);

    void wheelEvent(QGraphicsSceneWheelEvent *event) override;
    void rotateShape(qreal angle);
    void mousePressEvent(QGraphicsSceneMouseEvent *event) override;

    bool isDelete();

    virtual QRectF boundingRect() const override = 0;
    virtual void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) override = 0;

private:
    qreal originalSize;
    qreal rotationAngle;
    bool isScaling;
    bool isRotating;
    bool isDeleting;
    QMenu contextMenu;

    QAction *removeAct;
    QAction *setScaleAct;
    QAction *setRotateAct;
};

#endif // SHAPE_H
