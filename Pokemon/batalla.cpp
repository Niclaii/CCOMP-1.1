#include <iostream>
#include <string>

class Move {
public:
    std::string name;
    int damage;

    Move(std::string name, int damage) : name(name), damage(damage) {}
};

class Pokemon {
public:
    std::string name;
    int health;
    int attack;
    Move move;

    Pokemon(std::string name, int health, int attack, Move move)
        : name(name), health(health), attack(attack), move(move) {}

    void performMove(Pokemon& opponent) {
        std::cout << name << " usó " << move.name << "!\n";
        opponent.health -= move.damage;
        if (opponent.health < 0)
            opponent.health = 0;
        std::cout << opponent.name << " tiene " << opponent.health << " HP restantes.\n";
    }
};

int main() {
    Move thunderShock("Thunder Shock", 25);
    Move vineWhip("Vine Whip", 20);

    Pokemon pikachu("Pikachu", 100, 25, thunderShock);
    Pokemon bulbasaur("Bulbasaur", 110, 20, vineWhip);

    while (pikachu.health > 0 && bulbasaur.health > 0) {
        pikachu.performMove(bulbasaur);
        if (bulbasaur.health > 0)
            bulbasaur.performMove(pikachu);
    }

    if (pikachu.health == 0)
        std::cout << pikachu.name << " se ha debilitado!\n";
    else if (bulbasaur.health == 0)
        std::cout << bulbasaur.name << " se ha debilitado!\n";

    return 0;
}