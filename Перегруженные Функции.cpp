//1.
//#include <iostream>
//#include <math.h> 
//using namespace std;
//
//// Функция для нахождения среднего арифметического массива
//double average(const int* arr, int size) {
//    if (size <= 0) {
//        return 0.0; // Возвращаем 0, если размер массива некорректный
//    }
//
//    int sum = 0;
//    for (int i = 0; i < size; i++) {
//        sum += arr[i];
//    }
//
//    return static_cast<double>(sum) / size;
//}
//
//// Функция для нахождения наименьшего элемента массива
//int findMin(const int* arr, int size) {
//    if (size <= 0) {
//        return 0; // Возвращаем 0, если размер массива некорректный
//    }
//
//    int minElement = arr[0];
//    for (int i = 1; i < size; i++) {
//        if (arr[i] < minElement) {
//            minElement = arr[i];
//        }
//    }
//
//    return minElement;
//}
//
//// Функция для вывода массива
//void printArray(const int* arr, int size) {
//    for (int i = 0; i < size; i++) {
//        cout << arr[i] << " ";
//    }
//    cout << endl;
//}
//
//// Функция для переворачивания массива построчно
//void reverseArray(int* arr, int size) {
//    if (size <= 0) {
//        return; // Ничего не делаем, если размер массива некорректный
//    }
//
//    int start = 0;
//    int end = size - 1;
//    while (start < end) {
//        // Обмениваем значения элементов
//        int temp = arr[start];
//        arr[start] = arr[end];
//        arr[end] = temp;
//
//        // Переходим к следующим элементам
//        start++;
//        end--;
//    }
//}
//
//int main() {
//    const int size = 5;
//    int arr[size] = { 1, 2, 3, 4, 5 };
//
//    // Вызов перегруженных функций
//    double avg = average(arr, size);
//    cout << "Average: " << avg << std::endl;
//
//    int min = findMin(arr, size);
//    cout << "Min: " << min << std::endl;
//
//    printArray(arr, size);
//
//    reverseArray(arr, size);
//    printArray(arr, size);
//
//    return 0;
//}
//2.
#include <iostream>
#include <math.h> 
using namespace std;

// Функция для нахождения среднего арифметического двумерного массива
double average(const int** arr, int rows, int cols) {
    if (rows <= 0 || cols <= 0) {
        return 0.0; // Возвращаем 0, если размеры массива некорректные
    }

    int sum = 0;
    int count = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum += arr[i][j];
            count++;
        }
    }

    return static_cast<double>(sum) / count;
}

// Функция для нахождения наименьшего элемента двумерного массива
int findMin(const int** arr, int rows, int cols) {
    if (rows <= 0 || cols <= 0) {
        return 0; // Возвращаем 0, если размеры массива некорректные
    }

    int minElement = arr[0][0];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] < minElement) {
                minElement = arr[i][j];
            }
        }
    }

    return minElement;
}

// Функция для вывода двумерного массива
void printArray(const int** arr, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

// Функция для переворачивания двумерного массива построчно
void reverseArray(int** arr, int rows, int cols) {
    if (rows <= 0 || cols <= 0) {
        return; // Ничего не делаем, если размеры массива некорректные
    }

    for (int i = 0; i < rows; i++) {
        int start = 0;
        int end = cols - 1;
        while (start < end) {
            // Обмениваем значения элементов
            int temp = arr[i][start];
            arr[i][start] = arr[i][end];
            arr[i][end] = temp;

            // Переходим к следующим элементам
            start++;
            end--;
        }
    }
}

int main() {
    const int rows = 3;
    const int cols = 4;
    int** arr = new int* [rows];
    for (int i = 0; i < rows; i++) {
        arr[i] = new int[cols];
    }

    // Инициализация массива
    int count = 1;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            arr[i][j] = count++;
        }
    }

    // Вызов перегруженных функций
    double avg = average(arr, rows, cols);
    cout << "Average: " << avg << std::endl;

    int min = findMin(arr, rows, cols);
    cout << "Min: " << min << std::endl;

    printArray(arr, rows, cols);

    reverseArray(arr, rows, cols);
    printArray(arr, rows, cols);

    // Освобождение памяти
    for (int i = 0; i < rows; i++) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}
