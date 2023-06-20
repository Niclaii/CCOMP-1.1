#pragma once
#include <iostream>
#include "cPokemon.h"

class Combate 
{
	public:

        void Seleccion_Accion();
        
      

        void realizarMovimientoJ(Pokemon&MiPokemon,Pokemon& oponente)
        {
            int mov{ 0 };
            std::cout << "Elija un movimiento" << std::endl;
            std::cin >> mov;
            int dmg{ 0 };

            if (mov == 1)
            {
                std::cout << MiPokemon.getNombre() << "usó " <<MiPokemon.getATK1() << "!!" << std::endl;
                if (MiPokemon.getATK1() == "Absorber")
                {
                    MiPokemon.setDamage(30);
                    oponente.setHP(-30);
                }
                else if (MiPokemon.getATK1()=="Hoja Afilada")
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
                std::cout << oponente.getNombre() << "usó " << oponente.getATK2() << "!!" << std::endl;
                
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
                std::cout << oponente.getNombre() << "usó " << oponente.getATK3() << "!!" << std::endl;
            
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
                std::cout << oponente.getNombre() << "usó " << oponente.getATK4() << "!!" << std::endl;
                
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

            
            /*std::cout << nombre << " usó " << movimiento.nombre << "!\n";
            oponente.salud -= movimiento.danio;
            if (oponente.salud < 0)
                oponente.salud = 0;
            std::cout << oponente.nombre << " tiene " << oponente.salud << " puntos de vida restantes.\n";*/
        }






};