#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <cmath>
#include <unordered_set>
using namespace std;

//Создать массив, заполнить случайными значениями.
//Создать второй массив.
//Напишите программу которая во второй массив положит не уникальные
//элементы из первого массива без повторений.
//Для проверки использовать массив из примера.
//Пример:
//
//2 4 6 2 4 5 8 6 9
//2 4 6 0 0 0 0 0 0

const int ARRAY_SIZE = 9;

int main() {
    int firstArray[ARRAY_SIZE] = { 2, 4, 6, 2, 4, 5, 8, 6, 9 };
    int secondArray[ARRAY_SIZE] = { 0 };

    unordered_set<int> uniqueElements;

    for (int i = 0; i < ARRAY_SIZE; i++) {
        if (uniqueElements.find(firstArray[i]) != uniqueElements.end()) {
            continue;
        }

        bool isDuplicate = false;
        for (int j = i + 1; j < ARRAY_SIZE; j++) {
            if (firstArray[i] == firstArray[j]) {
                isDuplicate = true;
                break;
            }
        }

        if (isDuplicate) {
            secondArray[i] = firstArray[i];
            uniqueElements.insert(firstArray[i]);
        }
    }

    cout << "First Array: ";
    for (int i = 0; i < ARRAY_SIZE; i++) {
        cout << firstArray[i] << " ";
    }
    cout << endl;

    cout << "Second Array: ";
    for (int i = 0; i < ARRAY_SIZE; i++) {
        cout << secondArray[i] << " ";
    }
    cout << endl;

    return 0;
}




