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
//	cout << "������� ��������� �����: ";
//	cin >> a;
//
//	cout << "������� �������� �����: ";
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
//	cout << "������� ��������� �����: ";
//	cin >> a;
//
//	cout << "������� �������� �����: ";
//	cin >> b;
//
//	for (int i = a; i <= b; i++) {
//		sum += i;
//	}
//
//	cout << "����� ����� �� " << a << " �� " << b << " ����� " << sum;
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
//    cout << "������� ��������� ����� ���������: ";
//    cin >> a;
//
//    cout << "������� �������� ����� ���������: ";
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
//        cout << "������� �����: ";
//        cin >> number;
//        sum += number;
//    }
//
//    cout << "����� ��������� ����� ����� " << sum;
//
//    return 0;
//}
//
//int main() {
//    int a, b, random;
//
//    srand(time(NULL));
//
//    cout << "������� ������ ���������: ";
//    cin >> a;
//
//    cout << "�������� ����� ���������: ";
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

            cout << "������� ����� �� 1 �� 100: ";
            cin >> guess;

            if (guess > number) {
                cout << "���������� ����� ������" << endl;
            }

            else if (guess < number) {
                cout << "���������� ����� ������" << endl;
            }

            else {
                cout << "�� �������! ����� = " << number << endl;
                playerWins++;
                goto finishGame;
            }

            guesses++;

        }

        cout << "�� �� �������, ���������� ����� ����: " << number << endl;
        computerWins++;
    finishGame:;

    }

    cout << "����� ������: " << playerWins << endl;
    cout << "����� ����������: " << computerWins << endl;

    if (playerWins > computerWins) {
        cout << "������� �����!" << endl;
    }
    else {
        cout << "������� ���������!" << endl;
    }

    return 0;
}