#include <iostream>
#include <string>

class Ataque {
public:
    std::string nombre;
    int potencia;

    Ataque(std::string nombre, int potencia) {
        this->nombre = nombre;
        this->potencia = potencia;
    }
};

class Pokemon {
public:
    std::string nombre;
    int salud;
    int nivel;
    Ataque ataque1;
    Ataque ataque2;

    Pokemon(std::string nombre, int salud, int nivel, Ataque ataque1, Ataque ataque2)
        : nombre(nombre), salud(salud), nivel(nivel), ataque1(ataque1), ataque2(ataque2) {}

    void atacar(Pokemon &otro, Ataque &ataque) {
        otro.salud -= ataque.potencia;
        std::cout << this->nombre << " usa " << ataque.nombre << " en " << otro.nombre << "!\n";
        if (otro.salud <= 0) {
            std::cout << otro.nombre << " se ha debilitado!\n";
        } else {
            std::cout << otro.nombre << " tiene " << otro.salud << " puntos de salud restantes.\n";
        }
    }
};

int main() {
    Ataque trueno("Trueno", 30);
    Ataque impactrueno("Impactrueno", 20);
    Ataque lanzallamas("Lanzallamas", 35);
    Ataque ascuas("Ascuas", 25);

    Pokemon pikachu("Pikachu", 100, 5, trueno, impactrueno);
    Pokemon charmander("Charmander", 100, 5, lanzallamas, ascuas);

    while (true) {
        pikachu.atacar(charmander, pikachu.ataque1);
        if (charmander.salud <= 0) {
            std::cout << pikachu.nombre << " gana la batalla!\n";
            break;
        }

        charmander.atacar(pikachu, charmander.ataque1);
        if (pikachu.salud <= 0) {
            std::cout << charmander.nombre << " gana la batalla!\n";
            break;
        }
    }

    return 0;
}
