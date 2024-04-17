#include <iostream>
using namespace std;

class Parking {
protected:
    int capacity;
    int availableSpaces;
    int occupiedSpaces;

public:
    Parking(int capacity) : capacity(capacity), availableSpaces(capacity), occupiedSpaces(0) {}

    void parkVehicle() {
        if (availableSpaces > 0) {
            availableSpaces--;
            occupiedSpaces++;
            cout << "Vehicle parked successfully." << endl;
        }
        else {
            cout << "Parking is full. Cannot park vehicle." << endl;
        }
    }

    void removeVehicle() {
        if (occupiedSpaces > 0) {
            availableSpaces++;
            occupiedSpaces--;
            cout << "Vehicle removed from parking." << endl;
        }
        else {
            cout << "Parking is empty. No vehicle to remove." << endl;
        }
    }
};

class GroundParking : public Parking {
public:
    GroundParking(int capacity) : Parking(capacity) {}
};

class WaterParking : public Parking {
public:
    WaterParking(int capacity) : Parking(capacity) {}
};

class AirParking : public Parking {
public:
    AirParking(int capacity) : Parking(capacity) {}
};

int main() {
    GroundParking groundParking(50);
    groundParking.parkVehicle();
    groundParking.removeVehicle();

    WaterParking waterParking(20);
    waterParking.parkVehicle();
    waterParking.parkVehicle();

    AirParking airParking(10);
    airParking.parkVehicle();

    return 0;
}



