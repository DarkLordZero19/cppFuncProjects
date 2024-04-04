#include <iostream>
#include <cstring>
using namespace std;

class MyString {
private:
    char* data;
    int size;

public:
    // Конструктор
    MyString(const char* str = "") {
        size = strlen(str);
        data = new char[size + 1];
        strcpy(data, str);
    }

    ~MyString() {
        delete[] data;
    }

    void push_back(char c) {
        char* newData = new char[size + 2];
        strcpy(newData, data);
        newData[size] = c;
        newData[size + 1] = '\0';
        delete[] data;
        data = newData;
        size++;
    }

    void insert(int index, const char* str) {
        int strSize = strlen(str);
        char* newData = new char[size + strSize + 1];
        strncpy(newData, data, index);
        strncpy(newData + index, str, strSize);
        strcpy(newData + index + strSize, data + index);
        delete[] data;
        data = newData;
        size += strSize;
    }

    void clear() {
        delete[] data;
        size = 0;
        data = new char[1];
        data[0] = '\0';
    }

    int compare(const char* str) const {
        return strcmp(data, str);
    }

    const char* c_str() const {
        return data;
    }
};

int main() {
    MyString str("Hello");

    cout << "Initial string: " << str.c_str() << endl;

    str.push_back('!');
    cout << "After push_back: " << str.c_str() << endl;

    str.insert(5, " World");
    cout << "After insert: " << str.c_str() << endl;

    str.clear();
    cout << "After clear: " << str.c_str() << endl;

    int result = str.compare("Hello");
    if (result == 0) {
        cout << "Strings are equal" << endl;
    }
    else if (result < 0) {
        cout << "Initial string is less than the compared string" << endl;
    }
    else {
        cout << "Initial string is greater than the compared string" << endl;
    }

    return 0;
}
