#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int playerScore = 0;
int computerScore = 0;

int rollDice() {
    return rand() % 6 + 1;
}

bool isPair(int dice1, int dice2) {
    return dice1 == dice2;
}

void playRound() {
    int playerDice1 = rollDice();
    int playerDice2 = rollDice();

    int computerDice1 = rollDice();
    int computerDice2 = rollDice();

    int playerTotal = playerDice1 + playerDice2;
    int computerTotal = computerDice1 + computerDice2;

    if (isPair(playerDice1, playerDice2)) {
        playerTotal *= 2;
    }

    if (isPair(computerDice1, computerDice2)) {
        computerTotal *= 2;
    }

    cout << "Игрок: " << playerDice1 << "+" << playerDice2 << "=" << playerTotal << endl;
    cout << "Компьютер: " << computerDice1 << "+" << computerDice2 << "=" << computerTotal << endl;

    if (playerTotal > computerTotal) {
        playerScore++;
    }
    else {
        computerScore++;
    }
}

int main() {

    srand(time(NULL));

    for (int i = 0; i < 3 && playerScore < 3 && computerScore < 3; i++) {
        playRound();
        cout << "Счет: игрок - " << playerScore << ", компьютер - " << computerScore << endl;
    }

    if (playerScore > computerScore) {
        cout << "Победил игрок!" << endl;
    }
    else {
        cout << "Победил компьютер!" << endl;
    }

    return 0;
}
