#include <iostream>
using namespace std;

class Date {
public:
    int day;
    int month;
    int year;

    Date(int d, int m, int y) : day(d), month(m), year(y) {}
    int operator-(const Date& other) const {
        int thisDays = year * 365 + month * 30 + day;
        int otherDays = other.year * 365 + other.month * 30 + other.day;
        return thisDays - otherDays;
    }

    Date& operator+=(int days) {
        int totalDays = year * 365 + month * 30 + day;
        totalDays += days;
        year = totalDays / 365;
        month = (totalDays % 365) / 30;
        day = (totalDays % 365) % 30;

        return *this;
    }
};

int main() {
    Date date1(10, 3, 2022);
    Date date2(20, 5, 2023);
    int diff = date2 - date1;
    cout << "Difference in days: " << diff << endl;
    date1 += 100;
    cout << "New date: " << date1.day << "." << date1.month << "." << date1.year << endl;

    return 0;
}