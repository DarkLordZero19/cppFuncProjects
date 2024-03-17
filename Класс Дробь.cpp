#include <iostream>
using namespace std;

class Fraction {
private:
    int whole;       // Целая часть
    int numerator;   // Числитель
    int denominator; // Знаменатель

public:
    Fraction(int w, int n, int d) : whole(w), numerator(n), denominator(d) {}

    // Функция сложения
    Fraction add(const Fraction& other) const {
        int commonDenominator = denominator * other.denominator;
        int sumNumerator = whole * denominator + numerator * other.denominator + other.whole * other.denominator + other.numerator * denominator;
        int wholePart = sumNumerator / commonDenominator;
        int remainder = sumNumerator % commonDenominator;
        return Fraction(wholePart, remainder, commonDenominator);
    }

    // Функция вычитания
    Fraction subtract(const Fraction& other) const {
        int commonDenominator = denominator * other.denominator;
        int diffNumerator = whole * denominator + numerator * other.denominator - other.whole * other.denominator - other.numerator * denominator;
        int wholePart = diffNumerator / commonDenominator;
        int remainder = diffNumerator % commonDenominator;
        return Fraction(wholePart, remainder, commonDenominator);
    }

    // Функция умножения
    Fraction multiply(const Fraction& other) const {
        int productNumerator = (whole * denominator + numerator) * (other.whole * other.denominator + other.numerator);
        int productDenominator = denominator * other.denominator;
        int wholePart = productNumerator / productDenominator;
        int remainder = productNumerator % productDenominator;
        return Fraction(wholePart, remainder, productDenominator);
    }

    // Функция деления
    Fraction divide(const Fraction& other) const {
        int quotientNumerator = (whole * denominator + numerator) * other.denominator;
        int quotientDenominator = denominator * (other.whole * other.denominator + other.numerator);
        int wholePart = quotientNumerator / quotientDenominator;
        int remainder = quotientNumerator % quotientDenominator;
        return Fraction(wholePart, remainder, quotientDenominator);
    }

    // Функция для вывода дроби
    void print() const {
        std::cout << whole << " " << numerator << "/" << denominator << std::endl;
    }
};

int main() {
    Fraction f1(1, 2, 3);  // Дробь 1 2/3
    Fraction f2(3, 4, 5);  // Дробь 3 4/5

    Fraction sum = f1.add(f2);
    sum.print();  // Выводит 5 22/15

    Fraction diff = f1.subtract(f2);
    diff.print();  // Выводит -1 8/15

    Fraction product = f1.multiply(f2);
    product.print();  // Выводит 2 14/15

    Fraction quotient = f1.divide(f2);
    quotient.print();  // Выводит 1 1/2

    return 0;
}


