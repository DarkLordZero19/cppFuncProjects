/*Задание 1
#include <iostream>
using namespace std;

int main() {
char symbol;

cout << "Введите символ: ";
cin >> symbol;

if((symbol >= 'a' && symbol <= 'z') || (symbol >= 'A' && symbol <= 'Z')) {
cout << "Буква" << endl;
}
else if(symbol >= '0' && symbol <= '9') {
cout << "Цифра" << endl;
}
else if(symbol == '.' || symbol == ',' || symbol == ';' || symbol == '!' || symbol == '?') {
cout << "Знак препинания" << endl;
}
else {
cout << "Другой символ" << endl;
}

return 0;
}
*/

/*Задание 2
#include <iostream>
using namespace std;

int main() {
float duration;
int from, to;
float cost = 0;

cout << "Длительность разговора (мин): ";
cin >> duration;

cout << "1 - Билайн, 2 - МТС, 3 - Мегафон: " << endl;
cout << "Оператор отправления: ";
cin >> from;

cout << "Оператор получения: ";
cin >> to;

if(from == 1) {
// Билайн
if(to == 1) {
cost = duration * 1.5;
}
else if(to == 2) {
cost = duration * 2;
}
else {
cost = duration * 3;
}
}
else if(from == 2) {
// МТС
if(to == 1) {
cost = duration * 2;
}
else if(to == 2) {
cost = duration * 1.5;
}
else {
cost = duration * 2.5;
}
}
else {
// Мегафон
if(to == 1) {
cost = duration * 3;
}
else if(to == 2) {
cost = duration * 2.5;
}
else {
cost = duration * 2;
}
}

cout << "Стоимость разговора: " << cost << " руб." << endl;

return 0;
}
*/

/*Задание 3
#include <iostream>
using namespace std;

int main() {

int choice;

cout << "1. Ввести доход и опоздания, посчитать строки кода" << endl;
cout << "2. Ввести строки кода и доход, посчитать опоздания" << endl;
cout << "3. Ввести строки кода и опоздания, посчитать зарплату" << endl;
cout << "Выберите пункт меню: ";
cin >> choice;

if(choice == 1) {
int salary, delays;
cout << "Введиет желаемый доход: ";
cin >> salary;
cout << "Введиет количество опозданий: ";
cin >> delays;

int lines = salary * 2 - delays * 20;
cout << "Необходимо написать " << lines << " строк кода" << endl;

} else if(choice == 2) {

int lines, salary;
cout << "Введиет количество строк кода: ";
cin >> lines;
cout << "Введиет желаемый доход: ";
cin >> salary;

int delays = (salary * 2 - lines) / 20;
cout << "Максимальное количество опозданий: " << delays << endl;

} else {
int lines, delays;
cout << "Введиет количество строк кода: ";
cin >> lines;
cout << "Введиет количество опозданий: ";
cin >> delays;

int salary = lines/2 + delays * 20;
cout << "Зарплата составит: " << salary << " $" << endl;

}

return 0;
}
*/