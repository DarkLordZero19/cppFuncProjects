#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

class Gladiator {
private:
    string name;
    int health;
public:
    Gladiator(const string& name, int health) : name(name), health(health) {}

    const string& getName() const {
        return name;
    }

    int getHealth() const {
        return health;
    }

    void decreaseHealth(int amount) {
        health -= amount;
        if (health < 0) {
            health = 0;
        }
    }
};

class Battle {
private:
    Gladiator* gladiators[4];
    int numGladiators;
    int money;
public:
    Battle() : numGladiators(0), money(1000) {}

    void addGladiator(const Gladiator& gladiator) {
        if (numGladiators < 4) {
            gladiators[numGladiators++] = new Gladiator(gladiator);
        }
    }

    void printScore() const {
        cout << "Текущий счет: " << money << " рублей\n";
    }

    void fight() {
        srand(static_cast<unsigned int>(time(nullptr)));

        while (numGladiators > 1) {
            int gladiator1Index = rand() % numGladiators;
            int gladiator2Index = rand() % numGladiators;

            while (gladiator1Index == gladiator2Index) {
                gladiator2Index = rand() % numGladiators;
            }

            Gladiator* gladiator1 = gladiators[gladiator1Index];
            Gladiator* gladiator2 = gladiators[gladiator2Index];

            cout << "Бой между гладиатором " << gladiator1->getName() << " и гладиатором " << gladiator2->getName() << "!\n";

            int damage = rand() % 100 + 1; // Генерация случайного урона от 1 до 100
            gladiator2->decreaseHealth(damage);

            if (gladiator2->getHealth() == 0) {
                cout << "Гладиатор " << gladiator2->getName() << " погиб!\n";
                delete gladiators[gladiator2Index];

                // Сдвигаем оставшихся гладиаторов влево
                for (int i = gladiator2Index; i < numGladiators - 1; ++i) {
                    gladiators[i] = gladiators[i + 1];
                }

                --numGladiators;
            }
            else {
                cout << "Гладиатор " << gladiator2->getName() << " получил урон " << damage << " и остался с " << gladiator2->getHealth() << " здоровья.\n";
            }
        }

        if (numGladiators == 0) {
            cout << "Турнир завершен. У вас не осталось гладиаторов.\n";
        }
        else {
            cout << "Турнир завершен. Победил гладиатор " << gladiators[0]->getName() << "!\n";
        }

        printScore();
    }

    ~Battle() {
        for (int i = 0; i < numGladiators; ++i) {
            delete gladiators[i];
        }
    }
};

int main() {
    Battle battle;
    battle.addGladiator(Gladiator("Гладиатор 1", 100));
    battle.addGladiator(Gladiator("Гладиатор 2", 100));
    battle.addGladiator(Gladiator("Гладиатор 3", 100));
    battle.addGladiator(Gladiator("Гладиатор 4", 100));

    battle.fight();

    return 0;
}
