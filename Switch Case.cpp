/*
Задание 1.
//Вывести ФИО пользователя

#include <iostream>
using namespace std;

int main() {
  string firstName, lastName;

  cout << "Введите имя: ";
  cin >> firstName;

  cout << "Введите фамилию: ";
  cin >> lastName;

  cout << "Привет, " << firstName << " " << lastName << "!" << endl;

  return 0;
}

Задание 2.
//Ввести целое число и вывести его

#include <iostream>
using namespace std;

int main() {
  int number;

  cout << "Введите число: ";
  cin >> number;

  cout << "Вы ввели число: " << number << endl;

  return 0;
}

Задание 3.
//Ввести два числа и вынести их сумму

#include <iostream>
using namespace std;

int main() {
  int a, b, sum;

  cout << "Введите первое число: ";
  cin >> a;

  cout << "Введите второе число: ";
  cin >> b;

  sum = a + b;

  cout << "Сумма чисел равна " << sum << endl;

  return 0;
}

Задание 4.
//Вычислить сумму, разность, произведение и частное двух чисел

#include <iostream>
using namespace std;

int main() {
  int a, b;

  cout << "Введите первое число: ";
  cin >> a;

  cout << "Введите второе число: ";
  cin >> b;

  cout << a << " + " << b << " = " << a + b << endl;
  cout << a << " - " << b << " = " << a - b << endl;
  cout << a << " * " << b << " = " << a * b << endl;
  cout << a << " / " << b << " = " << a / b << endl;

  return 0;
}

Задание 5.
//Вычислить значение по формуле

#include <iostream>
#include <math.h>
using namespace std;

int main() {
  int x, result;

  cout << "Введите число x: ";
  cin >> x;

  result = 2*x + 3;

  cout << "Результат: " << result << endl;

  return 0;
}

Задание 6.
//Найти остаток от деления двух чисел:

#include <iostream>
using namespace std;

int main() {
  int a, b, rest;

  cout << "Введите dividend: ";
  cin >> a;

  cout << "Введите divisor: ";
  cin >> b;

  rest = a % b;

  cout << "Остаток от деления: " << rest << endl;

  return 0;
}
Задание 7.
//Определить положительное, отрицательное число или ноль

#include <iostream>
using namespace std;

int main() {
  int number;

  cout << "Введите число: ";
  cin >> number;

  if (number > 0) {
    cout << "Положительное число";
  } else if (number < 0) {
    cout << "Отрицательное число";
  } else {
    cout << "Число равно нулю";
  }

  return 0;
}

Задание 8.
//Вывести наибольшее из трёх чисел

#include <iostream>
using namespace std;

int main() {
  int a, b, c, max;

  cout << "Введите три числа: ";
  cin >> a >> b >> c;

  if (a > b) {
    max = a;
  } else {
    max = b;
  }

  if (max < c) {
    max = c;
  }

  cout << "Наибольшее число: " << max;

  return 0;
}

Задание 9.
//Определить чётность числа

#include <iostream>
using namespace std;

int main() {
  int number;

  cout << "Введите число: ";
  cin >> number;

  if (number % 2 == 0) {
    cout << "Четное число";
  } else {
    cout << "Нечетное число";
  }

  return 0;
}

Задание 10.
//Определить время суток

#include <iostream>
using namespace std;

int main() {
  int hour;

  cout << "Введите час (0-23): ";
  cin >> hour;

  if (hour < 6) {
    cout << "Ночь";
  } else if (hour < 12) {
    cout << "Утро";
  } else if (hour < 18) {
    cout << "День";
  } else if (hour < 24) {
    cout << "Вечер";
  }

  return 0;
}

Задание 11.
//Вывести оценку по баллам

#include <iostream>
using namespace std;

int main() {
  int score;

  cout << "Введите количество баллов: ";
  cin >> score;

  if (score < 40) {
    cout << "Неудовлетворительно";
  } else if (score < 60) {
    cout << "Удовлетворительно";
  } else if (score < 80) {
    cout << "Хорошо";
  } else {
    cout << "Отлично";
  }

  return 0;
}

Задание 12.
//Определить пору года

#include <iostream>
using namespace std;

int main() {
  int month;

  cout << "Введите номер месяца (1-12): ";
  cin >> month;

  if (month == 12 || month <= 2) {
    cout << "Зима";
  } else if (month <= 5) {
    cout << "Весна";
  } else if (month <= 8) {
    cout << "Лето";
  } else {
    cout << "Осень";
  }

  return 0;
}

Задание 13.
//Определить пол положительного/отрицательного числа

#include <iostream>
using namespace std;

int main() {
  int number;

  cout << "Введите число: ";
  cin >> number;

  string result = (number == 0) ? "нуль" : (number > 0) ? "положительное" : "отрицательное";

  cout << number << " - " << result << endl;

  return 0;
}

Задание 14
//Вывести большее из двух чисел

#include <iostream>
using namespace std;

int main() {
  int a, b;

  cout << "Введите два числа: ";
  cin >> a >> b;

  int max = (a > b) ? a : b;

  cout << "Максимум: " << max << endl;

  return 0;
}

Задание 15.
//Определить чётное/нечётное число

#include <iostream>
using namespace std;

int main() {
  int number;

  cout << "Введите число: ";
  cin >> number;

  string result = (number % 2 == 0) ? "четное" : "нечетное";

  cout << number << " - " << result << endl;

  return 0;
}

Задание 16.
//Определить день недели по номеру

#include <iostream>
using namespace std;

int main() {
  int day;

  cout << "Введите номер дня недели от 1 до 7: ";
  cin >> day;

  switch(day) {
    case 1:
      cout << "Понедельник";
      break;
    case 2:
      cout << "Вторник";
      break;
    case 3:
      cout << "Среда";
      break;
    case 4:
      cout << "Четверг";
      break;
    case 5:
      cout << "Пятница";
      break;
    case 6:
      cout << "Суббота";
      break;
    case 7:
      cout << "Воскресенье";
      break;
  }

  return 0;
}

Задание 17.
//Вывести оценку по баллам

#include <iostream>
using namespace std;

int main() {
  int score;

  cout << "Введите количество баллов: ";
  cin >> score;

  switch(score){
    case 10:
      cout << "Отлично!";
      break;
    case 9:
    case 8:
      cout << "Хорошо";
      break;
    case 7:
    case 6:
      cout << "Удовлетворительно";
      break;
    default:
      cout << "Повторите работу";
  }

  return 0;
}

Задание 18.
//Вывести название месяца

#include <iostream>
using namespace std;

int main() {
  int month;

  cout << "Введите номер месяца от 1 до 12: ";
  cin >> month;

  switch(month) {
    case 1: cout << "Январь"; break;
    case 2: cout << "Февраль"; break;
    case 3: cout << "Март"; break;
    // и так далее до декабря
    default: cout << "Неверный номер"; break;
  }

  return 0;
}
*/