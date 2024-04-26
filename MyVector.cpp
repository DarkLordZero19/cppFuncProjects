#include <algorithm> 
#include <vector>
#include <iostream>
using namespace std;

class MyVector {
private:
    vector<int> vec;
public:
    MyVector() {}
    MyVector(const vector<int>& v) : vec(v) {}

    void sort() {
        std::sort(vec.begin(), vec.end());
    }

    bool operator==(const MyVector& other) const {
        return this->vec == other.vec;
    }

    MyVector& operator=(const MyVector& other) {
        if (this != &other) {
            this->vec = other.vec;
        }
        return *this;
    }

    friend ostream& operator<<(ostream& out, const MyVector& mv) {
        for (int num : mv.vec) {
            out << num << " ";
        }
        return out;
    }
};

int main() {
    vector<int> data1 = { 3, 1, 4, 1, 5, 9, 2, 6 };
    vector<int> data2 = { 3, 1, 4, 1, 5, 9, 2, 6 };

    MyVector vec1(data1);
    MyVector vec2(data2);

    cout << "Before sorting:" << endl;
    cout << "vec1: " << vec1 << endl;
    cout << "vec2: " << vec2 << endl;

    vec1.sort();

    cout << "After sorting vec1:" << endl;
    cout << "vec1: " << vec1 << endl;

    cout << "Checking equality before assignment:" << endl;
    cout << "vec1 == vec2: " << (vec1 == vec2) << endl;

    vec2 = vec1;

    cout << "Checking equality after assignment:" << endl;
    cout << "vec1 == vec2: " << (vec1 == vec2) << endl;

    return 0;
}
