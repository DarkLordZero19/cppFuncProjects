//1 Задание
/*
#include <iostream>
using namespace std;

int main() {
	int seconds;

	cout << "Введите время в секундах: ";
	cin >> seconds;

	int hours = seconds / 3600;
	int minutes = (seconds % 3600) / 60;
	int remainingSeconds = seconds % 60;

	cout << hours << " часов " << minutes << " минут " << remainingSeconds << " секунд" << endl;

	return 0;
}
*/

//2 Задание
/*
#include <iostream>
#include <string>
using namespace std;

int main() {
	float number;

	cout << "Введите дробное число: ";
	cin >> number;

	int integerPart = int(number);
	float fractionalPart = number - integerPart;
	int cents = fractionalPart * 100;

	cout << integerPart << " долларов и " << cents << " центов" << endl;

	return 0;
}
*/

//3 Задание
/*
#include <iostream>
using namespace std;

int main() {
int days;

cout << "Введите количество дней: ";
cin >> days;

int weeks = days / 7;
int remainingDays = days % 7;

cout << weeks << " недель и " << remainingDays << " дней" << endl;

return 0;
}
*/

//4 Задание
/*
#include <iostream>
using namespace std;

int main() {
int number;

cout << "Введите 6-значное число: ";
cin >> number;

// Проверка на 6-значное число
if(number < 100000 || number > 999999) {
cout << "Введено не 6-значное число" << endl;
return 0;
}

int first3Digits = number / 100;
int last3Digits = number % 1000;

int sumFirst = first3Digits / 10 + first3Digits % 10 + number % 100 / 10;
int sumLast = last3Digits / 100 + last3Digits % 100 / 10 + last3Digits % 10;

if(sumFirst == sumLast) {
cout << "Число счастливое" << endl;
}
else {
cout << "Число не счастливое" << endl;
}

return 0;
}
*/


//5 Задание
/*
#include <iostream>
using namespace std;

int main() {
int number;

cout << "Введите 4-значное число: ";
cin >> number;

// Проверка на 4-значное число
if(number < 1000 || number > 9999) {
cout << "Введено не 4-значное число" << endl;
return 0;
}

int firstDigit = number/1000;
int secondDigit = number%1000/100;
int thirdDigit = number%100/10;
int fourthDigit = number%10;

int newNumber = fourthDigit1000 + thirdDigit100 + secondDigit*10 + firstDigit;

cout << "Преобразованное число: " << newNumber << endl;

return 0;
}
*/


//6 Задание
/*
#include <iostream>
using namespace std;

int main() {
int number1, number2, number3, number4, number5, number6, number7;
int max;

cout << "Введите 7 чисел: ";
cin >> number1 >> number2 >> number3 >> number4 >> number5 >> number6 >> number7;

max = number1;

if(number2 > max) max = number2;
if(number3 > max) max = number3;
if(number4 > max) max = number4;
if(number5 > max) max = number5;
if(number6 > max) max = number6;
if(number7 > max) max = number7;

cout << "Максимальное число: " << max << endl;

return 0;
}
*/