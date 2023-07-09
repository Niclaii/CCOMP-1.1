#include <iostream>
#include "cCombate.h"
#include <cstdlib>
#include <ctime>


void Combate::RealizarMovimiento(Jugador& player, Pokemon& oponente)
{
    Pokemon MiPokemon = player.getEquipoPokemon(0);
    int mov{ 0 };
    std::srand(std::time(0));
    int random1 = std::rand() % 4 + 1;
    //semilla del random


    std::cout << "Elija un movimiento" << std::endl;
    std::cin >> mov;
    int dmg{ 0 };

    //TURNOS
    if (MiPokemon.getVEL() > oponente.getVEL())
    {
        if (mov == 1)
        {
            std::cout << MiPokemon.getNombre() << " uso " << MiPokemon.getATK1() << "!!" << std::endl;
            if (MiPokemon.getATK1() == "Absorber")
            {
                MiPokemon.setDamage(30);
                oponente.setHP(-30);
            }
            else if (MiPokemon.getATK1() == "Hoja Afilada")
            {
                MiPokemon.setDamage(50);
                oponente.setHP(-50);
            }
            else if (MiPokemon.getATK1() == "Somnifero")
            {
                MiPokemon.setDamage(50);
                oponente.setHP(-50);
            }
            else if (MiPokemon.getATK1() == "Ascuas")
            {
                MiPokemon.setDamage(50);
                oponente.setHP(-40);
            }
            else if (MiPokemon.getATK1() == "Garra Dragon")
            {
                MiPokemon.setDamage(70);
                oponente.setHP(-70);
            }
        }
        else if (mov == 2)
        {
            std::cout << MiPokemon.getNombre() << " uso " << MiPokemon.getATK2() << "!!" << std::endl;

            if (MiPokemon.getATK1() == "Absorber")
            {
                MiPokemon.setDamage(30);
                oponente.setHP(-30);
            }
            else if (MiPokemon.getATK1() == "Hoja Afilada")
            {
                MiPokemon.setDamage(50);
                oponente.setHP(-50);
            }
            else if (MiPokemon.getATK1() == "Somnifero")
            {
                MiPokemon.setDamage(50);
                oponente.setHP(-50);
            }
            else if (MiPokemon.getATK1() == "Ascuas")
            {
                MiPokemon.setDamage(50);
                oponente.setHP(-40);
            }
            else if (MiPokemon.getATK1() == "Garra Dragon")
            {
                MiPokemon.setDamage(70);
                oponente.setHP(-70);
            }
        }
        else if (mov == 3)
        {
            std::cout << MiPokemon.getNombre() << " uso " << MiPokemon.getATK3() << "!!" << std::endl;

            if (MiPokemon.getATK1() == "Absorber")
            {
                MiPokemon.setDamage(30);
                oponente.setHP(-30);
            }
            else if (MiPokemon.getATK1() == "Hoja Afilada")
            {
                MiPokemon.setDamage(50);
                oponente.setHP(-50);
            }
            else if (MiPokemon.getATK1() == "Somnifero")
            {
                MiPokemon.setDamage(50);
                oponente.setHP(-50);
            }
            else if (MiPokemon.getATK1() == "Ascuas")
            {
                MiPokemon.setDamage(50);
                oponente.setHP(-40);
            }
            else if (MiPokemon.getATK1() == "Garra Dragon")
            {
                MiPokemon.setDamage(70);
                oponente.setHP(-70);
            }
        }
        else if (mov == 4)
        {
            std::cout << MiPokemon.getNombre() << " uso " << MiPokemon.getATK4() << "!!" << std::endl;

            if (MiPokemon.getATK1() == "Absorber")
            {
                MiPokemon.setDamage(30);
                oponente.setHP(-30);
            }
            else if (MiPokemon.getATK1() == "Hoja Afilada")
            {
                MiPokemon.setDamage(50);
                oponente.setHP(-50);
            }
            else if (MiPokemon.getATK1() == "Somnifero")
            {
                MiPokemon.setDamage(50);
                oponente.setHP(-50);
            }
            else if (MiPokemon.getATK1() == "Ascuas")
            {
                MiPokemon.setDamage(50);
                oponente.setHP(-40);
            }
            else if (MiPokemon.getATK1() == "Garra Dragon")
            {
                MiPokemon.setDamage(70);
                oponente.setHP(-70);
            }
        }
        else if (mov == 5)
        {

        }
    }
    else if (oponente.getVEL() > MiPokemon.getVEL())
    {
        if (random1 == 1)
        {
            std::cout << oponente.getNombre() << " uso " << oponente.getATK1() << "!!" << std::endl;
            if (oponente.getATK1() == "Absorber")
            {
                oponente.setDamage(30);
                MiPokemon.setHP(-30);
            }
            else if (oponente.getATK1() == "Hoja Afilada")
            {
                oponente.setDamage(50);
                MiPokemon.setHP(-50);
            }
            else if (oponente.getATK1() == "Somnifero")
            {
                oponente.setDamage(50);
                MiPokemon.setHP(-50);
            }
            else if (oponente.getATK1() == "Ascuas")
            {
                oponente.setDamage(50);
                MiPokemon.setHP(-40);
            }
            else if (oponente.getATK1() == "Garra Dragon")
            {
                oponente.setDamage(70);
                MiPokemon.setHP(-70);
            }
        }
        else if (random1 == 2)
        {
            std::cout << oponente.getNombre() << " uso " << oponente.getATK2() << "!!" << std::endl;

            if (oponente.getATK2() == "Absorber")
            {
                oponente.setDamage(30);
                MiPokemon.setHP(-30);
            }
            else if (oponente.getATK2() == "Hoja Afilada")
            {
                oponente.setDamage(50);
                MiPokemon.setHP(-50);
            }
            else if (oponente.getATK2() == "Somnifero")
            {
                oponente.setDamage(50);
                MiPokemon.setHP(-50);
            }
            else if (oponente.getATK2() == "Ascuas")
            {
                oponente.setDamage(50);
                MiPokemon.setHP(-40);
            }
            else if (oponente.getATK2() == "Garra Dragon")
            {
                oponente.setDamage(70);
                MiPokemon.setHP(-70);
            }
        }
        else if (random1 == 3)
        {
            std::cout << oponente.getNombre() << " uso " << oponente.getATK3() << "!!" << std::endl;

            if (oponente.getATK3() == "Absorber")
            {
                oponente.setDamage(30);
                MiPokemon.setHP(-30);
            }
            else if (oponente.getATK3() == "Hoja Afilada")
            {
                oponente.setDamage(50);
                MiPokemon.setHP(-50);
            }
            else if (oponente.getATK3() == "Somnifero")
            {
                oponente.setDamage(50);
                MiPokemon.setHP(-50);
            }
            else if (oponente.getATK3() == "Ascuas")
            {
                oponente.setDamage(50);
                MiPokemon.setHP(-40);
            }
            else if (oponente.getATK3() == "Garra Dragon")
            {
                oponente.setDamage(70);
                MiPokemon.setHP(-70);
            }
        }
        else if (random1 == 4)
        {
            std::cout << oponente.getNombre() << " uso " << oponente.getATK4() << "!!" << std::endl;

            if (oponente.getATK4() == "Absorber")
            {
                oponente.setDamage(30);
                MiPokemon.setHP(-30);
            }
            else if (oponente.getATK4() == "Hoja Afilada")
            {
                oponente.setDamage(50);
                MiPokemon.setHP(-50);
            }
            else if (oponente.getATK4() == "Somnifero")
            {
                oponente.setDamage(50);
                MiPokemon.setHP(-50);
            }
            else if (oponente.getATK4() == "Ascuas")
            {
                oponente.setDamage(50);
                MiPokemon.setHP(-40);
            }
            else if (oponente.getATK4() == "Garra Dragon")
            {
                oponente.setDamage(70);
                MiPokemon.setHP(-70);
            }
        }
        else if (mov == 5)
        {
            
        }
    }
};

void Combate::Seleccion_Accion(Jugador& player,Pokemon& PokeOponente,Objeto &bolsa)
{
    while (true)
    {
        Pokemon MiPoke = player.getEquipoPokemon(0);
        MiPoke.AsignarAtaques(MiPoke);

        int opcion{ 0 }, opcion2{ 0 };

        std::cout << "Escoja una opcion:\n1.Luchar\n2.Mochila\n3.Pokemon\n4.Huir" << std::endl;
        std::cin >> opcion;

        if (opcion == 1)
        {
            std::cout << "1." << MiPoke.getATK1() << "\n";
            std::cout << "2." << MiPoke.getATK2() << "\n";
            std::cout << "3." << MiPoke.getATK3() << "\n";
            std::cout << "4." << MiPoke.getATK4() << "\n";

            Combate::RealizarMovimiento(player, PokeOponente);


        }
        else if (opcion == 2)
        {
            int OpcionBolsa{ 0 };

            bolsa.asignarObjeto();
            bolsa.visualizarObjetos();
            std::cin >> OpcionBolsa;
            bolsa.manipularObjeto(OpcionBolsa);

            if (OpcionBolsa == 1)
            {
                MiPoke.setHP(MiPoke.getHP() + 20);
            }
            else if (OpcionBolsa == 2)
            {
                MiPoke.setHP(MiPoke.getHP() + 50);
            }
            else
            {
                std::cout << "falta implementar\n";
            }
            bolsa.visualizarObjetos();
        }
        else if (opcion == 3)
        {
            player.MostrarEquipo();
        }
        else if (opcion == 4)
        {
            std::cout << "No puedes huir de un combate contra un entrenador\n";
        }
    }
};

void Combate::BarrasDeVida(Jugador& Player1, Pokemon&PokeOponente,Objeto& bolsa)
{
    std::cout << PokeOponente.getNombre() << ": " << PokeOponente.getHP() << "  Lv: " << PokeOponente.getNivel();
    std::cout << "\n\n\n\n\n\n\n";
    std::cout << Player1.EquipoPokemon[0].getNombre() << " : " << Player1.EquipoPokemon[0].getHP() << "  Lv: " << Player1.EquipoPokemon[0].getNivel();
    std::cout << "\n";
    Seleccion_Accion(Player1, PokeOponente, bolsa);
}



