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
#include <QAction>

class Shape : public QGraphicsItem {
public:
    Shape(QGraphicsItem *parent = nullptr);

    void wheelEvent(QGraphicsSceneWheelEvent *event) override;
    void rotateShape(qreal angle);
    void mousePressEvent(QGraphicsSceneMouseEvent *event) override;
    void mouseReleaseEvent(QGraphicsSceneMouseEvent *event) override;

    virtual QRectF boundingRect() const override = 0;
    virtual void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) override = 0;

    virtual double getArea();
    virtual double getPerimetr();

protected:
    double Area;
    double Perimetr;
    qreal originalSize;

private:

    qreal rotationAngle;
    bool isScaling;
    bool isRotating;
    bool isDeleting;
    QMenu contextMenu;

    QAction *removeAct;
    QAction *setScaleAct;
    QAction *setRotateAct;
    QAction *showArea;
    QAction *showPerimetr;
};

#endif // SHAPE_H
