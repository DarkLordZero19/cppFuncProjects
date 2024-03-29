#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

class Student {
public:
    string name;
    int age;
    string major;

    void randomStudent() {
        string names[] = { "Alice", "Bob", "Charlie", "David", "Eve" };
        int numNames = sizeof(names) / sizeof(names[0]);

        int minAge = 18;
        int maxAge = 25;

        string majors[] = { "Computer Science", "Mathematics", "Physics", "English", "History" };
        int numMajors = sizeof(majors) / sizeof(majors[0]);

        int nameIndex = rand() % numNames;
        int age = minAge + (rand() % (maxAge - minAge + 1));
        int majorIndex = rand() % numMajors;

        name = names[nameIndex];
        age = age;
        major = majors[majorIndex];
    }
};

int main() {
    srand(time(0));
    Student student;
    student.randomStudent();
    cout << "Name: " << student.name << endl;
    cout << "Age: " << student.age << endl;
    cout << "Major: " << student.major << endl;

    return 0;
}