/*#include <iostream>
#include <string>
#include "cPokemon.h"
/*
class Movimiento {
public:
    std::string nombre;
    int danio;

    Movimiento(std::string nombre, int danio) : nombre(nombre), danio(danio) {}
};
*/
/*
class Pokemon {
public:
    std::string nombre;
    int salud;
    int ataque;
    Movimiento movimiento1;
    Movimiento movimiento2;

    Pokemon(std::string nombre, int salud, int ataque, Movimiento movimiento1, Movimiento movimiento2)
        : nombre(nombre), salud(salud), ataque(ataque), movimiento1(movimiento1), movimiento2(movimiento2) {}

    void realizarMovimiento(Pokemon& oponente, int mov)
    {
        Movimiento movimiento = (mov == 1) ? movimiento1 : movimiento2;
        std::cout << nombre << " usó " << movimiento.nombre << "!\n";
        oponente.salud -= movimiento.danio;
        if (oponente.salud < 0)
            oponente.salud = 0;
        std::cout << oponente.nombre << " tiene " << oponente.salud << " puntos de vida restantes.\n";
    }
};
*/
/*
int seleccionMovimiento()
{
    int seleccion;
    while (true)
    {
        std::cin >> seleccion;
        if (seleccion =! 1 && 2)
        {
            std::cout << "Por favor, elija un movimiento válido (1 o 2): ";
        }
        else if (seleccion == 1 || seleccion == 2)
        {
            return seleccion;
        }
        else
        {
            std::cout << "Por favor, elija un movimiento válido (1 o 2): ";
        }
    }
}*/
/*
int main() {
    Movimiento descarga("Descarga", 20);
    Movimiento impactrueno("Impactrueno", 10);
    Movimiento latigoCepa("Látigo Cepa", 20);
    Movimiento placaje("Placaje", 10);

    Pokemon pikachu("Pikachu", 100, 25, descarga, impactrueno);
    Pokemon bulbasaur("Bulbasaur", 110, 20, latigoCepa, placaje);

    while (pikachu.salud > 0 && bulbasaur.salud > 0)
    {
        std::cout << "Elija un movimiento para Pikachu (1 - Descarga, 2 - Impactrueno): ";
        pikachu.realizarMovimiento(bulbasaur, seleccionMovimiento());
        if (bulbasaur.salud > 0)
        {
            std::cout << "Elija un movimiento para Bulbasaur (1 - Látigo Cepa, 2 - Placaje): ";
            bulbasaur.realizarMovimiento(pikachu, seleccionMovimiento());
        }
    }

    if (pikachu.salud == 0)
    {
        std::cout << pikachu.nombre << " se ha debilitado!\n";
    }
    else if (bulbasaur.salud == 0)
    {
        std::cout << bulbasaur.nombre << " se ha debilitado!\n";
    }
    return 0;
}
*/