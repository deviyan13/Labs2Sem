#include "mergesort.h"

MergeSort::MergeSort() {}

void MergeSort::run(QVector<int> array, QVector<int> aux)
{
    MergeSort::mergesort(array, aux, 0, array.size() - 1);
}

// Объединяем два отсортированных подмассива `arr[low…mid]` и `arr[mid+1…high]`
void MergeSort::Merge(QVector<int> arr, QVector<int> aux, int low, int mid, int high)
{
    int k = low, i = low, j = mid + 1;

    // пока есть элементы в левом и правом рядах
    while (i <= mid && j <= high)
    {
        if (arr[i] <= arr[j]) {
            aux[k++] = arr[i++];
        }
        else {
            aux[k++] = arr[j++];
        }
    }

    // копируем оставшиеся элементы
    while (i <= mid) {
        aux[k++] = arr[i++];
    }

    // Вторую половину копировать не нужно (поскольку остальные элементы
    // уже находятся на своем правильном месте во вспомогательном массиве)

    // копируем обратно в исходный массив, чтобы отразить порядок сортировки
    for (int i = low; i <= high; i++) {
        arr[i] = aux[i];
    }
}

// Сортируем массив `arr[low…high]`, используя вспомогательный массив `aux`
void MergeSort::mergesort(QVector<int> arr, QVector<int> aux, int low, int high)
{
    // базовый вариант
    if (high <= low) {        // если размер прогона <= 1
        return;
    }

    // найти середину
    int mid = (low + ((high - low) >> 1));

    // рекурсивно разделяем прогоны на две половины до тех пор, пока размер прогона не станет <= 1,
    // затем объединяем их и возвращаемся вверх по цепочке вызовов

    mergesort(arr, aux, low, mid);          // разделить/объединить левую половину
    mergesort(arr, aux, mid + 1, high);     // разделить/объединить правую половину

    Merge(arr, aux, low, mid, high);        // объединить два полупрогона.
}
