class Combate {
public:
    static void iniciar(Pokemon& pokemon1, Pokemon& pokemon2) {
        std::cout << pokemon1.getNombre() << " contra " << pokemon2.getNombre() << "!\n";

        Sprite(pokemon1.getnPokedex());
        Sprite(pokemon2.getnPokedex());

        while (true) {
            // Pokemon1 ataca a Pokemon2
            pokemon2.setHP(pokemon2.getHP() - pokemon1.getATK());
            std::cout << pokemon1.getNombre() << " usa " << pokemon1.getATK1() << " en " << pokemon2.getNombre() << "!\n";
            if (pokemon2.getHP() <= 0) {
                std::cout << pokemon2.getNombre() << " se ha debilitado!\n";
                std::cout << pokemon1.getNombre() << " gana la batalla!\n";
                break;
            } else {
                std::cout << pokemon2.getNombre() << " tiene " << pokemon2.getHP() << " puntos de salud restantes.\n";
            }

            // Pokemon2 ataca a Pokemon1
            pokemon1.setHP(pokemon1.getHP() - pokemon2.getATK());
            std::cout << pokemon2.getNombre() << " usa " << pokemon2.getATK1() << " en " << pokemon1.getNombre() << "!\n";
            if (pokemon1.getHP() <= 0) {
                std::cout << pokemon1.getNombre() << " se ha debilitado!\n";
                std::cout << pokemon2.getNombre() << " gana la batalla!\n";
                break;
            } else {
                std::cout << pokemon1.getNombre() << " tiene " << pokemon1.getHP() << " puntos de salud restantes.\n";
            }
        }
    }
};

int main() {
    // Crear Pokémon y registrarlos en la Pokédex
    // ...

    // Iniciar un combate entre dos Pokémon
    Combate::iniciar(Bulbasaur, Charmander);

    return 0;
}
