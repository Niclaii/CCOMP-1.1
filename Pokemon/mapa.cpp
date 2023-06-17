#include <iostream>
#include <string>

#define MAP_SIZE 10

class Player {
public:
    int x;
    int y;

    Player(int x, int y) : x(x), y(y) {}

    void move(char direction) {
        switch (direction) {
        case 'w':
            if (y > 0) y--;
            break;
        case 's':
            if (y < MAP_SIZE - 1) y++;
            break;
        case 'a':
            if (x > 0) x--;
            break;
        case 'd':
            if (x < MAP_SIZE - 1) x++;
            break;
        }
    }
};

class Game {
public:
    Player player;

    Game() : player(MAP_SIZE / 2, MAP_SIZE / 2) {}

    void printMap() {
        for (int i = 0; i < MAP_SIZE; ++i) {
            for (int j = 0; j < MAP_SIZE; ++j) {
                if (i == player.y && j == player.x)
                    std::cout << 'P';
                else
                    std::cout << '.';
            }
            std::cout << std::endl;
        }
    }

    void handleInput() {
        std::string input;
        std::getline(std::cin, input);
        if (!input.empty()) {
            player.move(input[0]);
        }
    }
};

int main() {
    Game game;

    while (true) {
        game.printMap();
        game.handleInput();
    }

    return 0;
}