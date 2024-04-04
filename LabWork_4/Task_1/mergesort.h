#ifndef MERGESORT_H
#define MERGESORT_H

#include<QVector>

#include <time.h>

class MergeSort
{
public:
    MergeSort();

    static void Merge(QVector<int> arr, QVector<int> aux, int low, int mid, int high);
    static void mergesort(QVector<int> arr, QVector<int> aux, int low, int high);

    static void run(QVector <int> array, QVector<int> aux);
};

#endif // MERGESORT_H


