//Задание 1
#include <iostream>
using namespace std;
//
//void removeElements(int arr[], int size, int n)
//{
//    if (n >= size) {
//        cout << "Невозможно удалить больше элементов, чем есть в массиве." << endl;
//        return;
//    }
//    for (int i = 0; i < size - n; ++i) {
//        arr[i] = arr[i + n];
//    }
//    for (int i = size - n; i < size; ++i) {
//        arr[i] = 0;
//    }
//    cout << "Массив после удаления элементов:" << endl;
//    for (int i = 0; i < size; ++i) {
//        cout << arr[i] << " ";
//    }
//    cout << endl;
//}
//
//int main()
//{
//    int arr[] = { 1, 2, 3, 4, 5, 6 };
//    int size = sizeof(arr) / sizeof(arr[0]);
//    int n = 3;
//
//    cout << "Исходный массив:" << endl;
//    for (int i = 0; i < size; ++i) {
//        cout << arr[i] << " ";
//    }
//    cout << endl;
//    removeElements(arr, size, n);
//}
//Задание 2
//int* appendArrays(int arr1[], int size1, int arr2[], int size2)
//{
//    int newSize = size1 + size2;
//    int* newArr = new int[newSize];
//    for (int i = 0; i < size1; ++i) {
//        newArr[i] = arr1[i];
//    }
//    for (int i = 0; i < size2; ++i) {
//        newArr[size1 + i] = arr2[i];
//    }
//    return newArr;
//}
//
//int main()
//{
//    int arr1[] = { 1, 2, 3 };
//    int size1 = sizeof(arr1) / sizeof(arr1[0]);
//
//    int arr2[] = { 4, 5, 6 };
//    int size2 = sizeof(arr2) / sizeof(arr2[0]);
//
//    int* resultArr = appendArrays(arr1, size1, arr2, size2);
//    int newSize = size1 + size2;
//    cout << "Результат после добавления массива arr2:" << endl;
//    for (int i = 0; i < newSize; ++i) {
//        cout << resultArr[i] << " ";
//    }
//    cout << endl;
//    delete[] resultArr;
//}
//Задание 3
//void removeEvenValues(int arr[], int& size)
//{
//    int index = 0; // Индекс для записи новых значений
//
//    for (int i = 0; i < size; ++i) {
//        if (arr[i] % 2 != 0) {
//            arr[index] = arr[i];
//            ++index;
//        }
//    }
//    size = index;
//}
//
//int main()
//{
//    int arr[] = { 1, 2, 3, 4, 5, 6 };
//    int size = sizeof(arr) / sizeof(arr[0]);
//
//    cout << "Исходный массив:" << endl;
//    for (int i = 0; i < size; ++i) {
//        cout << arr[i] << " ";
//    }
//    cout << endl;
//    removeEvenValues(arr, size);
//
//    cout << "Массив после удаления четных значений:" << endl;
//    for (int i = 0; i < size; ++i) {
//        cout << arr[i] << " ";
//    }
//    cout << endl;
//}
//Задание 4
void mergeArrays(int arr1[], int& size1, int arr2[], int size2, int arr3[], int size3)
{
    for (int i = 0; i < size2; ++i) {
        arr1[size1] = arr2[i];
        ++size1;
    }

    for (int i = 0; i < size3; ++i) {
        arr1[size1] = arr3[i];
        ++size1;
    }
}

int main()
{
    int arr1[10] = { 1, 2, 3 };
    int size1 = 3;

    int arr2[] = { 4, 5, 6 };
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    int arr3[] = { 7, 8, 9 };
    int size3 = sizeof(arr3) / sizeof(arr3[0]);

    cout << "Исходный массив arr1:" << endl;
    for (int i = 0; i < size1; ++i) {
        cout << arr1[i] << " ";
    }
    cout << endl;

    cout << "Массив arr2:" << endl;
    for (int i = 0; i < size2; ++i) {
        cout << arr2[i] << " ";
    }
    cout << endl;

    cout << "Массив arr3:" << endl;
    for (int i = 0; i < size3; ++i) {
        cout << arr3[i] << " ";
    }
    cout << endl;

    mergeArrays(arr1, size1, arr2, size2, arr3, size3);

    cout << "Результат после объединения:" << endl;
    for (int i = 0; i < size1; ++i) {
        cout << arr1[i] << " ";
    }
    cout << endl;
}
//Задание 5
void moveEvenElements(int arr1[], int size1, int arr2[], int& size2)
{
    for (int i = 0; i < size1; ++i) {
        if (arr1[i] % 2 == 0) {
            arr2[size2] = arr1[i];
            ++size2;
        }
    }
}

int main()
{
    int arr1[] = { 1, 2, 3, 4, 5, 6 };
    int size1 = sizeof(arr1) / sizeof(arr1[0]);

    int arr2[10]; 
    int size2 = 0; 

    cout << "Исходный массив arr1:" << endl;
    for (int i = 0; i < size1; ++i) {
        cout << arr1[i] << " ";
    }
    cout << endl;

    moveEvenElements(arr1, size1, arr2, size2);

    cout << "Результат после переноса четных элементов в arr2:" << endl;
    for (int i = 0; i < size2; ++i) {
        cout << arr2[i] << " ";
    }
    cout << endl;
}
