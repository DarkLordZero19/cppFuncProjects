#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <cmath>
using namespace std;

//Из массива удаляется элемент с позиции (допустим 5)

int main() {
    const int MAX_SIZE = 10;
    int arr[MAX_SIZE] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int size = 10;
    int position = 5;

    cout << "Исходный массив: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    if (position >= 0 && position < size) {
        for (int i = position; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }
        size--;

        cout << "Измененный массив: ";
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    else {
        cout << "Ошибка: недопустимая позиция!" << endl;
    }

    return 0;
}

//В массив добавляется элемент в начало.

int main() {
    const int MAX_SIZE = 100;
    int arr[MAX_SIZE] = { 1, 2, 3, 4, 5 };
    int size = 5; 
    int newElement = 0; 
    copy_backward(arr, arr + size, arr + size + 1);
    arr[0] = newElement;
    size++;

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

//Создать массив типа int на 10 элементов и заполнить его случайными числами от 7 до 14.

int main() {
    random_device rd;                        // Инициализация генератора случайных чисел
    mt19937 gen(rd());                       // Инициализация генератора случайных чисел
    uniform_int_distribution<int> dist(7, 14); 

    const int arraySize = 10;
    int array[arraySize];

    for (int i = 0; i < arraySize; ++i) {
        array[i] = dist(gen); 
    }

    for (int i = 0; i < arraySize; ++i) {
        cout << array[i] << " ";
    }
    cout << std::endl;

    return 0;
}

//Заполнить массив из 50-ти элементов нечётными числами от 1 до 99.

int main() {
    const int size = 50;
    int arr[size];
    int num = 1;

    for (int i = 0; i < size; i++) {
        arr[i] = num;
        num += 2;
    }

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

//Массив выводит нечётные элементы на с++

int main() {
    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int length = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < length; i++) {
        if (arr[i] % 2 != 0) {
            cout << arr[i] << " ";
        }
    }

    return 0;
}

//Дано число n, не превышающее 100. Создайте массив размером n×n и заполните его по следующему правилу. На главной диагонали должны быть записаны числа 0. На двух диагоналях, прилегающих к главной, числа 1. На следующих двух диагоналях числа 2, и т.д.

int main() {
    int n;
    cout << "Введите число n: ";
    cin >> n;

    // Создание двумерного массива размером n x n
    int array[100][100];

    // Заполнение массива по указанному правилу
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            array[i][j] = abs(i - j);
        }
    }

    // Вывод массива
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

//В одномерном массиве, вводимом с клавиатуры и состоящем из 10 целых элементов, вычислить сумму элементов массива, расположенных между первым и последним нулевыми элементами на с++

int main() {
    const int size = 10;
    int array[size];

    cout << "Введите " << size << " элементов массива:\n";
    for (int i = 0; i < size; ++i) {
        cin >> array[i];
    }

    // Поиск первого и последнего нулевых элементов
    int firstZeroIndex = -1;
    int lastZeroIndex = -1;
    for (int i = 0; i < size; ++i) {
        if (array[i] == 0) {
            if (firstZeroIndex == -1) {
                firstZeroIndex = i;
            }
            lastZeroIndex = i;
        }
    }

    // Вычисление суммы элементов между первым и последним нулевыми элементами
    int sum = 0;
    if (firstZeroIndex != -1 && lastZeroIndex != -1 && firstZeroIndex != lastZeroIndex) {
        for (int i = firstZeroIndex + 1; i < lastZeroIndex; ++i) {
            sum += array[i];
        }
    }

    cout << "Сумма элементов между первым и последним нулевыми элементами: " << sum << endl;

    return 0;
}

//Объявить три массива. Первые два заполнить случайными значениями  от 10 до 30. В элементы третьего массива записать сумму соответствующих элементов первых двух массивов.

int main() {
    srand(time(nullptr));

    const int size = 5;
    int array1[size];
    int array2[size];
    int array3[size];

    for (int i = 0; i < size; ++i) {
        array1[i] = rand() % 21 + 10;  
        array2[i] = rand() % 21 + 10; 
    }

    for (int i = 0; i < size; ++i) {
        array3[i] = array1[i] + array2[i];
    }

    // Вывод значений трех массивов
    cout << "Массив 1: ";
    for (int i = 0; i < size; ++i) {
        cout << array1[i] << " ";
    }
    cout << endl;

    cout << "Массив 2: ";
    for (int i = 0; i < size; ++i) {
        cout << array2[i] << " ";
    }
    cout << endl;

    cout << "Массив 3 (сумма): ";
    for (int i = 0; i < size; ++i) {
        cout << array3[i] << " ";
    }
    cout << endl;

    return 0;
}

//Ввести одномерный массив A и N элементов. Каждый третий элемент массива умножить на собственный индекс. Массив вывести до и после преобразования на с++

int main() {
    int N;
    cout << "Введите количество элементов массива: ";
    cin >> N;

    int A[N];

    cout << "Введите элементы массива A:" << endl;
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    cout << "Массив A до преобразования:" << endl;
    for (int i = 0; i < N; ++i) {
        cout << A[i] << " ";
    }
    cout << endl;

    for (int i = 2; i < N; i += 3) {
        A[i] *= i;
    }

    cout << "Массив A после преобразования:" << endl;
    for (int i = 0; i < N; ++i) {
        cout << A[i] << " ";
    }
    cout << endl;

    return 0;
}

//Написать функцию, формирующую одномерный массив, состоящий из элементов квадратной матрицы, лежащих ниже главной диагонали.

void createLowerDiagonalArray(int matrix[][MAX_SIZE], int size, int resultArray[]) {
    const int MAX_SIZE = 100;
    int index = 0;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < i; ++j) {
            resultArray[index] = matrix[i][j];
            ++index;
        }
    }
}

int main() {
    int size;
    cout << "Введите размер квадратной матрицы: ";
    cin >> size;

    int matrix[MAX_SIZE][MAX_SIZE];

    cout << "Введите элементы матрицы:" << endl;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            cin >> matrix[i][j];
        }
    }

    int resultArray[MAX_SIZE * MAX_SIZE];

    createLowerDiagonalArray(matrix, size, resultArray);

    cout << "Одномерный массив элементов ниже главной диагонали:" << endl;
    for (int i = 0; i < (size * (size - 1)) / 2; ++i) {
        cout << resultArray[i] << " ";
    }
    cout << endl;

    return 0;
}

//В одномерном массиве, состоящем из n целых элементов на с++, вычислить:
//1. Минимальный по модулю элемент массива.
//2. Сумму модулей элементов массива.

int findMinAbsolute(int arr[], int n) {
    int minAbs = abs(arr[0]);  // Инициализируем минимальное значение как абсолютное значение первого элемента
    for (int i = 1; i < n; i++) {
        int absValue = abs(arr[i]);
        if (absValue < minAbs) {
            minAbs = absValue;  // Обновляем минимальное значение, если найденный элемент имеет меньшее абсолютное значение
        }
    }
    return minAbs;
}

int calculateSumOfAbsolute(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += abs(arr[i]);  // Добавляем абсолютное значение каждого элемента к сумме
    }
    return sum;
}

int main() {
    int n;
    cout << "Введите размер массива: ";
    cin >> n;

    int arr[n];
    cout << "Введите элементы массива: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int minAbs = findMinAbsolute(arr, n);
    int sumOfAbsolute = calculateSumOfAbsolute(arr, n);

    cout << "Минимальный по модулю элемент массива: " << minAbs << endl;
    cout << "Сумма модулей элементов массива: " << sumOfAbsolute << endl;

    return 0;
}

//Пусть пользователь вводит значения отрицательного числового массива.

int main() {
    const int MAX_SIZE = 100; 
    int array[MAX_SIZE];
    int size; 

    cout << "Введите размер массива (не более " << MAX_SIZE << "): ";
    cin >> size;

    if (size <= 0 || size > MAX_SIZE) {
        cout << "Некорректный размер массива.\n";
        return 0;
    }

    cout << "Введите значения массива:\n";
    for (int i = 0; i < size; ++i) {
        cout << "Значение " << i + 1 << ": ";
        cin >> array[i];
    }

    cout << "Введенный массив:\n";
    for (int i = 0; i < size; ++i) {
        cout << array[i] << " ";
    }
    cout << "\n";

    return 0;
}


