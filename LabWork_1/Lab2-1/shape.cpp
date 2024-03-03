#include "shape.h"
#include "qgraphicsscene.h"
#include "qmenu.h"
#include <QDebug>
#include <mainwindow.h>
#include <QItemSelectionModel>

Shape::Shape(QGraphicsItem *parent) : QGraphicsItem(parent){
    setFlag(QGraphicsItem::ItemIsSelectable);
    setFlag(QGraphicsItem::ItemIsMovable);
    setCursor(Qt::OpenHandCursor);
    rotationAngle = 0.0;
    isScaling = false;
    isRotating = false;
    isDeleting = false;
    originalSize = 1;

    removeAct = contextMenu.addAction("Удалить");
    setScaleAct = contextMenu.addAction("Масштибировать по колесику мыши");
    setRotateAct = contextMenu.addAction("Поворачивать по колесику мыши");
    // showArea = contextMenu.addAction("Площадь фигуры");
    // showPerimetr = contextMenu.addAction("Периметр фигуры");
    // showCenter = contextMenu.addAction("test");
}

void Shape::wheelEvent(QGraphicsSceneWheelEvent *event) {
    if (isRotating)
    {
        qreal angleDelta = event->delta() / 30;
        rotateShape(angleDelta);
    }
    else if (isScaling)
    {
        qreal delt = event->delta() / 1000.0;
        if(originalSize + delt > 0.2 && originalSize + delt < 7)
        {
            originalSize += delt;
            setScale(originalSize);
            event->accept();
        }
    }
    QGraphicsItem::wheelEvent(event);
}


void Shape::rotateShape(qreal angle) {

    rotationAngle += angle;
    setRotation(rotationAngle);
}

void Shape::mousePressEvent(QGraphicsSceneMouseEvent *event) {

    if (event->button() == Qt::RightButton)
    {

        QAction *selectedAction = contextMenu.exec(event->screenPos());

        if (selectedAction == removeAct)
        {
            scene()->removeItem(this);
            emit isDeleted();
        }
        else if(selectedAction == setScaleAct)
        {
            isScaling = true;
            isRotating = false;
        }
        else if(selectedAction == setRotateAct)
        {
            isScaling = false;
            isRotating = true;
        }
        // else if(selectedAction == showArea)
        // {
        //     qDebug() << getArea();
        // }
        // else if(selectedAction == showPerimetr)
        // {
        //     qDebug() << getPerimetr();
        // }
        // else if(selectedAction == showCenter)
        // {
        //     qDebug() << getCenter();
        // }
    }

    else if(event->button() == Qt::LeftButton)
    {
        setCursor(Qt::ClosedHandCursor);
    }

    QGraphicsItem::mousePressEvent(event);
}

void Shape::mouseReleaseEvent(QGraphicsSceneMouseEvent *event)
{
    setCursor(Qt::OpenHandCursor);

    QGraphicsItem::mouseReleaseEvent(event);
}

double Shape::getArea()
{
   return Area * originalSize * originalSize;
}

double Shape::getPerimetr()
{
    return Perimetr * originalSize;
}

QPointF Shape::getCenter()
{
    return QPointF(mapToScene(originPoint));
}


