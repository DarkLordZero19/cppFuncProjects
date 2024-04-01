#include <iostream>
using namespace std;

class ParkingLot {
private:
    int array1[132];
    int array2[30];
    int array3[221];

public:
    ParkingLot() {
        for (int i = 0; i < 132; ++i) {
            array1[i] = 10 + i;
        }

        for (int i = 0; i < 30; ++i) {
            array2[i] = 10 + i;
        }

        for (int i = 0; i < 221; ++i) {
            array3[i] = 10 + i;
        }
    }

    void printArray1() {
        cout << "Array1: ";
        for (int i = 0; i < 132; ++i) {
            cout << array1[i] << " ";
        }
        cout << endl;
    }

    void printArray2() {
        cout << "Array2: ";
        for (int i = 0; i < 30; ++i) {
            cout << array2[i] << " ";
        }
        cout << endl;
    }

    void printArray3() {
        cout << "Array3: ";
        for (int i = 0; i < 221; ++i) {
            cout << array3[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    ParkingLot parkingLot;
    parkingLot.printArray1();
    parkingLot.printArray2();
    parkingLot.printArray3();

    return 0;
}
