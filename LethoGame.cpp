
#include <iostream>
#include <ctime>

using namespace std;

class Player {
private:

    int health = 100;
    int maxDamage = 30;
    int minDamage = 10;
    int maxHeal = 20;
    int minHeal =  5;

public:

    Player() {

        cout << "------------------------" << endl;
        cout << "Hi, my name is Letho" << endl;
        cout << "------------------------" << endl;
        cout << "Letho's health is: "<< health << endl;
        cout << "Letho's max Damage is: " << maxDamage << endl;
        cout << "Letho's min Damage is: " << minDamage << endl;
        cout << "Letho's max healing is: " << maxHeal << endl;
        cout << "Letho's min healing is: " << minHeal << endl;
        cout << "------------------------" << endl;
    }

    int GetHealth() {

        return health;

    }

    int GiveDamage() {

        srand(time(0));
        int damage = (rand() % (maxDamage - minDamage + 1) + minDamage);
        cout << "Player is dealing " << damage << " to the enemy" << endl;
        return damage;

    }

    void TakeDamage(int damage) {

        cout << "Player is taking " << damage << " from the enemy" << endl;

    }

    int Heal() {

        srand(time(0));
        int heal = (rand() % (maxHeal - minHeal + 1) + minHeal);
        cout << "Player has healed " << heal << " health" << endl;

        health += heal;
        cout << "Player health is  " << health << endl;

        return heal;

    }


};

class Enemy {
private:

    int health = 100;
    int maxDamage = 30;
    int minDamage = 10;

public:

    Enemy() {
        cout << "Enemy is Spawned" << endl;
        cout << "Enemy health is " << health << endl;
        cout << "Enemy maxDamage is " << maxDamage << endl;
        cout << "Enemy minDamage is " << minDamage << endl;
    }

    int GetHealth() {

        return health;

    }

    int GiveDamage() {

        srand(time(0));
        int damage = (rand() % (maxDamage - minDamage + 1) + minDamage);
        cout << "Enemy is dealing " << damage << " to the player" << endl;
        return damage;

    }

    void TakeDamage(int damage) {

        cout << "Enemy is taking " << damage << " from the player" << endl;

    }

};

void GameStory() {
    cout << "------------------------" << endl;
    cout << "Let's Start An Adventure" << endl;
    cout << "------------------------" << endl;
}

int main()
{
    GameStory();
    char inputChar;

    do {

        cout << endl << "Press S to Start or press any other button to exit" << endl;
        cin >> inputChar;

        if (inputChar == 'S' || inputChar == 's') {

            cout << "Game has started" << endl;

            Player newPlayer;
            Enemy newEnemy;
        }
        else {
            cout << "Game has ended" << endl;
        }

    } while (inputChar == 'S' || inputChar == 's');

}

