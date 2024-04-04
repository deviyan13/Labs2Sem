#ifndef PICTUREDARRAY_H
#define PICTUREDARRAY_H

#include "indexofarray.h"

#include <QVector>
#include <QGraphicsItem>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QPointer>
#include <QEventLoop>
#include <QTimer>

class PicturedArray : public QGraphicsItem
{
public:
    PicturedArray();

    void push_back(int num, QColor color);
    void updateArray();
    void setScene(QGraphicsScene* scene);
    int size();
    void swap(int first, int second);
    void clear();

    void resetColors();

    void Merge(int low, int mid, int high);
    void mergesort(int low, int high);

    void QuickSort(int left, int right);

    int BinSearch(int digit);


    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) override;
    QRectF boundingRect() const override;

    void heapify(int n, int i);
    void heapSort(int n);
private:

    QVector <std::pair<int, QColor>> array, aux;
    QVector <IndexOfArray*> indexesOfArray;

    QGraphicsScene* graphicsScene;
    QGraphicsView* graphicsView;
};

#endif // PICTUREDARRAY_H
