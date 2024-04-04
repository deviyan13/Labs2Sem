#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "iterator.h"

// void Merge(int arr[], int aux[], int low, int mid, int high)
// {
//     int k = low, i = low, j = mid + 1;
    
//     while(i <= mid && j <= high)
//     {
//         if(arr[i] <= arr[j])
//         {
//             aux[k++] = arr[i++];
//         }
//         else
//         {
//             aux[k++] = arr[j++];
//         }
//     }
    
//     while(i <= mid)
//     {
//         aux[k++] = arr[i++];
//     }
    
//     for(int i = 0; i <= high; i++)
//     {
//         arr[i] = aux[i];
//     }
// }

// void mergeSort(int arr[], int aux[], int low, int high)
// {
//     if(high <= low) return;
    
//     int mid = (low + high) / 2;
    
    
//     mergeSort(arr, aux, low, mid);
//     mergeSort(arr, aux, mid + 1, high);

//     Merge(arr, aux, low, mid, high);
// }



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    Mvector<int> vector(3);

    vector[0] = 1;
    vector[1] = 2;
    vector[2] = 3;

    auto it = vector.begin();

    while(it != vector.end())
    {
        qDebug() << *it;
        it++;
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}
