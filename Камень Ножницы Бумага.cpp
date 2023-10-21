#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int playerScore = 0;
    int computerScore = 0;

    cout << "Игра Камень, Ножницы, Бумага" << endl;
    cout << "До победы необходимо набрать 5 очков." << endl;

    while (playerScore < 5 && computerScore < 5) {
        int playerChoice;
        int computerChoice;

        cout << endl;
        cout << "Выберите: (1) Камень, (2) Ножницы, (3) Бумага: ";
        cin >> playerChoice;

        // Генерация случайного выбора компьютера
        srand(time(0));
        computerChoice = rand() % 3 + 1;

        cout << "Вы выбрали: ";
        switch (playerChoice) {
        case 1:
            cout << "Камень" << endl;
            break;
        case 2:
            cout << "Ножницы" << endl;
            break;
        case 3:
           cout << "Бумага" << endl;
            break;
        default:
            cout << "Некорректный выбор" << endl;
            continue;
        }
        cout << "Компьютер выбрал: ";
        switch (computerChoice) {
        case 1:
            cout << "Камень" << endl;
            break;
        case 2:
            cout << "Ножницы" << endl;
            break;
        case 3:
            cout << "Бумага" << endl;
            break;
        }
        if (playerChoice == computerChoice) {
            cout << "Ничья!" << endl;
        }
        else if (
            (playerChoice == 1 && computerChoice == 2) ||
            (playerChoice == 2 && computerChoice == 3) ||
            (playerChoice == 3 && computerChoice == 1)
            ) {
            cout << "Вы победили в этом раунде!" <<endl;
            playerScore++;
        }
        else {
            cout << "Компьютер победил в этом раунде!" << endl;
            computerScore++;
        }
        cout << "Текущий счет: Игрок " << playerScore << " : Компьютер " << computerScore << endl;
    }

    cout << endl;
    cout << "Игра окончена!" << endl;
    cout << "Итоговый счет: Игрок " << playerScore << " : Компьютер " << computerScore << endl;

    if (playerScore > computerScore) {
        cout << "Вы победили в игре!" << endl;
    }
    else if (playerScore < computerScore) {
        cout << "Компьютер победил в игре!" << endl;
    }
    else {
        cout << "Игра закончилась вничью!" << endl;
    }

    return 0;
}
