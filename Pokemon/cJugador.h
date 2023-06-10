#pragma once

#include "Personaje.h"
#include <string>

class Jugador : public Personaje 
{
private:
    int JugadorX;
    int JugadorY;
    std::string Interaccion;

public:
    void Interaccion();
    void Equipo_pokemon();
    
    
};
