#pragma once

#include "Personaje.h"
#include <string>

class NPC : public Personaje {
private:
    std::string Sprite_mundo;
    std::string Nombre;
    std::string Sprite_Combate;
    std::string Dialogo_Interaccion;

public:
    void Asignar_Sprite(std::string sprite);
    void Asignar_Nombre(std::string nombre);
    void Equipo_pokemon();
