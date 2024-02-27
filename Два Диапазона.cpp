#include <iostream>
using namespace std;
bool validateRange(int start, int end) {
    return start <= end;
}

void printNumbers(int range1_start, int range1_end, int range2_start, int range2_end) {
    cout << "Целые числа, принадлежащие обоим диапазонам: ";

    for (int num = range1_start; num <= range1_end; num++) {
        if (num >= range2_start && num <= range2_end) {
            cout << num << " ";
        }
    }

    cout << endl;
}
int main() {
    int range1_start, range1_end, range2_start, range2_end;

    cout << "Введите начало первого диапазона: ";
    cin >> range1_start;
    cout << "Введите конец первого диапазона: ";
    cin >> range1_end;
    cout << "Введите начало второго диапазона: ";
    cin >> range2_start;
    cout << "Введите конец второго диапазона: ";
    cin >> range2_end;

    if (!validateRange(range1_start, range1_end) || !validateRange(range2_start, range2_end)) {
        cout << "Ошибка: некорректно заданы границы диапазонов." << endl;
        return 1;
    }
    printNumbers(range1_start, range1_end, range2_start, range2_end);
}
