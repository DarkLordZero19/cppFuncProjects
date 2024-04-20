#include <iostream>
#include <cstring>
#define random(min, max) min + rand() % (max - min + 1)
using namespace std;

class MyString {
protected:
	int capacity;
	int availableSpaces;
	int occupiedSpaces;
private:
	char* str;
public:
	MyString() {
		str = nullptr;
	}
	MyString(const char* str) {
		this->str = strCopy(str);
	}

	MyString(const MyString& other) {
		this->str = strCopy(other.str);
	}

	MyString& operator =(const MyString& other) {
		if (this == &other) return *this;
		delete[] this->str;
		this->str = strCopy(other.str);
		return *this;
	}

	MyString& operator +=(const MyString& other) {
		int len1 = strlen(this->str);
		int len2 = strlen(other.str);
		char* newStr = new char[len1 + len2 + 1];
		strcpy(newStr, this->str);
		strcat(newStr, other.str);
		delete[] this->str;
		this->str = newStr;
		return *this;
	}

	void print() {
		cout << this->str << endl;
	}

	~MyString() {
		delete[] this->str;
	}

private:
	char* strCopy(const char* str) {
		char* newStr;
		int length = strlen(str);
		newStr = new char[length + 1];
		for (int i = 0; i < length; i++) {
			newStr[i] = str[i];
		}
		newStr[length] = '\0';
		return newStr;
	}
};

int main()
{
	MyString str1 = "Test";
	MyString str2 = "Test2";
	str1.print();
	str2.print();

	str1 += str2;

	cout << "Result:" << endl;
	str1.print();
	str2.print();

	return 0;
}
