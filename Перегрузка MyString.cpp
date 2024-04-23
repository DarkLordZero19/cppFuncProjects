#include <iostream>
#include <cstring>
#define random(min, max) min + rand() % (max - min + 1)
using namespace std;

class MyString {
private:
    char* str;
public:
    MyString() : str(nullptr) {}
    MyString(const char* str) {
        this->str = strCopy(str);
    }
    MyString(const MyString& other) {
        this->str = strCopy(other.str);
    }
    MyString& operator=(const MyString& other) {
        if (this == &other) return *this;
        delete[] this->str;
        this->str = strCopy(other.str);
        return *this;
    }
    MyString& operator+=(const MyString& other) {
        int len1 = strlen(this->str);
        int len2 = strlen(other.str);
        char* newStr = new char[len1 + len2 + 1];
        strcpy(newStr, this->str);
        strcat(newStr, other.str);
        delete[] this->str;
        this->str = newStr;
        return *this;
    }
    bool operator==(const MyString& other) const {
        return strcmp(this->str, other.str) == 0;
    }
    bool operator!=(const MyString& other) const {
        return strcmp(this->str, other.str) != 0;
    }
    bool operator<(const MyString& other) const {
        return strcmp(this->str, other.str) < 0;
    }
    bool operator>(const MyString& other) const {
        return strcmp(this->str, other.str) > 0;
    }
    bool operator<=(const MyString& other) const {
        return strcmp(this->str, other.str) <= 0;
    }
    bool operator>=(const MyString& other) const {
        return strcmp(this->str, other.str) >= 0;
    }
    friend ostream& operator<<(ostream& out, const MyString& myStr) {
        out << myStr.str;
        return out;
    }
    ~MyString() {
        delete[] str;
    }
private:
    char* strCopy(const char* str) {
        int length = strlen(str);
        char* newStr = new char[length + 1];
        strcpy(newStr, str);
        return newStr;
    }
};

int main() {
    MyString str1 = "Test";
    MyString str2 = "Test2";
    cout << "str1: " << str1 << endl;
    cout << "str2: " << str2 << endl;

    str1 += str2;
    cout << "str1 == str2: " << (str1 == str2) << endl;

    cout << "Result:" << endl;
    cout << "str1: " << str1 << endl;
    cout << "str2: " << str2 << endl;

    return 0;
}



