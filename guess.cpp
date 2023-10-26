#include <iostream>
#include <random>
#include <cstdlib>
#include <time.h>
using namespace std;

//int main() {
//	srand(time(NULL));
//	int a = 0;
//	while (a <= 10) cout << a++;
//
//	int a2 = 0;
//	while (a <= 10) cout << 1+rand()%100;
//}

//int main() {
//	for (int i = 1; i <= 7; i++) {
//		cout << i << " ";
//	}
//
//	return 0;
//}
//
//int main() {
//	for (int i = 6; i >= 2; i--) {
//		cout << i << " ";
//	}
//
//	return 0;
//}
//
//int main() {
//	int a, b;
//
//	cout << "Введите начальное число: ";
//	cin >> a;
//
//	cout << "Введите конечное число: ";
//	cin >> b;
//
//	for (int i = a; i <= b; i++) {
//		cout << i << " ";
//	}
//
//	return 0;
//}

//int main() {
//	int a, b, sum = 0;
//
//	cout << "Введите начальное число: ";
//	cin >> a;
//
//	cout << "Введите конечное число: ";
//	cin >> b;
//
//	for (int i = a; i <= b; i++) {
//		sum += i;
//	}
//
//	cout << "Сумма чисел от " << a << " до " << b << " равна " << sum;
//
//	return 0;
//}


//int main() {
//    for (int i = 0; i <= 30; i++) {
//        if (i % 2 == 0) {
//            cout << i << " ";
//        }
//    }
//
//    return 0;
//}
//
//int main() {
//    int a, b;
//
//    cout << "Введите начальное число диапазона: ";
//    cin >> a;
//
//    cout << "Введите конечное число диапазона: ";
//    cin >> b;
//
//    for (int i = a; i <= b; i++) {
//        if (i % 3 == 0) {
//            cout << i << " ";
//        }
//    }
//
//    return 0;
//}
//
//int main() {
//    int sum = 0;
//
//    for (int i = 0; i < 6; i++) {
//        int number;
//        cout << "Введите число: ";
//        cin >> number;
//        sum += number;
//    }
//
//    cout << "Сумма введенных чисел равна " << sum;
//
//    return 0;
//}
//
//int main() {
//    int a, b, random;
//
//    srand(time(NULL));
//
//    cout << "Введите начало диапазона: ";
//    cin >> a;
//
//    cout << "Введиете конец диапазона: ";
//    cin >> b;
//
//    for (int i = 0; i < 10; i++) {
//        random = a + rand() % (b - a + 1);
//        cout << random << " ";
//    }
//
//    return 0;
//}

int main() {
    srand(time(0));
    int playerWins = 0;
    int computerWins = 0;
    for (int game = 0; game < 3; game++) {
        int number = rand() % 100 + 1;
        int guesses = 0;
        int guess;
        for (int i = 0; i < 5; i++) {

            cout << "Введите число от 1 до 100: ";
            cin >> guess;

            if (guess > number) {
                cout << "Загаданное число меньше" << endl;
            }

            else if (guess < number) {
                cout << "Загаданное число больше" << endl;
            }

            else {
                cout << "Вы угадали! Число = " << number << endl;
                playerWins++;
                goto finishGame;
            }

            guesses++;

        }

        cout << "Вы не угадали, загаданное число было: " << number << endl;
        computerWins++;
    finishGame:;

    }

    cout << "Побед игрока: " << playerWins << endl;
    cout << "Побед компьютера: " << computerWins << endl;

    if (playerWins > computerWins) {
        cout << "Победил игрок!" << endl;
    }
    else {
        cout << "Победил компьютер!" << endl;
    }

    return 0;
}