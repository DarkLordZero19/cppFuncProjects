#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <cmath>
#include <unordered_set>
using namespace std;

//Реализовать сортировку подсчетом.

void countingSort(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    int* count = new int[max + 1]();

    for (int i = 0; i < size; ++i) {
        ++count[arr[i]];
    }

    int idx = 0;
    for (int i = 0; i <= max; ++i) {
        while (count[i] > 0) {
            arr[idx++] = i;
            --count[i];
        }
    }

    delete[] count;
}

int main() {
    int arr[] = { 5, 2, 8, 3, 1 };
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Исходный массив: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    countingSort(arr, size);

    cout << "Отсортированный массив: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}




