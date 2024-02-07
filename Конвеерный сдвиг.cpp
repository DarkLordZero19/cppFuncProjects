#include <iostream>
using namespace std;
const int ROWS = 3;  // Количество строк
const int COLS = 3;  // Количество столбцов

void shiftLeft(int matrix[ROWS][COLS], int shiftCount) {
    int temp;

    for (int row = 0; row < ROWS; ++row) {
        for (int shift = 0; shift < shiftCount; ++shift) {
            temp = matrix[row][0];
            for (int col = 0; col < COLS - 1; ++col) {
                matrix[row][col] = matrix[row][col + 1];
            }
            matrix[row][COLS - 1] = temp;
        }
    }
}

void shiftRight(int matrix[ROWS][COLS], int shiftCount) {
    int temp;

    for (int row = 0; row < ROWS; ++row) {
        for (int shift = 0; shift < shiftCount; ++shift) {
            temp = matrix[row][COLS - 1];
            for (int col = COLS - 1; col > 0; --col) {
                matrix[row][col] = matrix[row][col - 1];
            }
            matrix[row][0] = temp;
        }
    }
}

void shiftUp(int matrix[ROWS][COLS], int shiftCount) {
    int temp;

    for (int col = 0; col < COLS; ++col) {
        for (int shift = 0; shift < shiftCount; ++shift) {
            temp = matrix[0][col];
            for (int row = 0; row < ROWS - 1; ++row) {
                matrix[row][col] = matrix[row + 1][col];
            }
            matrix[ROWS - 1][col] = temp;
        }
    }
}

void shiftDown(int matrix[ROWS][COLS], int shiftCount) {
    int temp;

    for (int col = 0; col < COLS; ++col) {
        for (int shift = 0; shift < shiftCount; ++shift) {
            temp = matrix[ROWS - 1][col];
            for (int row = ROWS - 1; row > 0; --row) {
                matrix[row][col] = matrix[row - 1][col];
            }
            matrix[0][col] = temp;
        }
    }
}

void printMatrix(int matrix[ROWS][COLS]) {
    for (int row = 0; row < ROWS; ++row) {
        for (int col = 0; col < COLS; ++col) {
            cout << matrix[row][col] << " ";
        }
        cout << endl;
    }
}

int main() {
    int matrix[ROWS][COLS] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    cout << "Original Matrix:" << endl;
    printMatrix(matrix);

    shiftLeft(matrix, 2);  // Сдвигаем влево на 2 позиции
    cout << "Shifted Left:" << endl;
    printMatrix(matrix);

    shiftRight(matrix, 1);  // Сдвигаем вправо на 1 позицию
    cout << "Shifted Right:" << endl;
    printMatrix(matrix);

    shiftUp(matrix, 3);  // Сдвигаем вверх на 3 позиции
    cout << "Shifted Up:" << endl;
    printMatrix(matrix);

    shiftDown(matrix, 2);  // Сдвигаем вниз на 2 позиции
    cout << "Shifted Down:" << endl;
    printMatrix(matrix);
}

