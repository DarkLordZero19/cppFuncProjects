#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string fullName;
    string dateOfBirth;
    string phoneNumber;
    string city;
    string country;
    string schoolName;
    string schoolCity;
    string schoolCountry;
    string groupNumber;

public:
    // Функция для ввода данных о студенте
    void input() {
        cout << "Введите ФИО студента: ";
        getline(cin >> ws, fullName);

        cout << "Введите дату рождения студента: ";
        getline(cin >> ws, dateOfBirth);

        cout << "Введите контактный телефон студента: ";
        getline(cin >> ws, phoneNumber);

        cout << "Введите город студента: ";
        getline(cin >> ws, city);

        cout << "Введите страну студента: ";
        getline(cin >> ws, country);

        cout << "Введите название учебного заведения: ";
        getline(cin >> ws, schoolName);

        cout << "Введите город, где находится учебное заведение: ";
        getline(cin >> ws, schoolCity);

        cout << "Введите страну, где находится учебное заведение: ";
        getline(cin >> ws, schoolCountry);

        cout << "Введите номер группы студента: ";
        getline(cin >> ws, groupNumber);
    }

    // Функция для вывода данных о студенте
    void display() {
        cout << "ФИО: " << fullName << endl;
        cout << "Дата рождения: " << dateOfBirth << endl;
        cout << "Контактный телефон: " << phoneNumber << endl;
        cout << "Город: " << city << endl;
        cout << "Страна: " << country << endl;
        cout << "Название учебного заведения: " << schoolName << endl;
        cout << "Город учебного заведения: " << schoolCity << endl;
        cout << "Страна учебного заведения: " << schoolCountry << endl;
        cout << "Номер группы: " << groupNumber << endl;
    }

    // Аксессоры для доступа к отдельным переменным-членам
    string getFullName() const {
        return fullName;
    }

    string getDateOfBirth() const {
        return dateOfBirth;
    }

    string getPhoneNumber() const {
        return phoneNumber;
    }

    string getCity() const {
        return city;
    }

    string getCountry() const {
        return country;
    }

    string getSchoolName() const {
        return schoolName;
    }

    string getSchoolCity() const {
        return schoolCity;
    }

    string getSchoolCountry() const {
        return schoolCountry;
    }

    string getGroupNumber() const {
        return groupNumber;
    }
};

int main() {
    Student student;

    student.input();
    cout << "\nДанные о студенте:\n";
    student.display();

    return 0;
}