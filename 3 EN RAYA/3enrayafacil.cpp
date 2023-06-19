#include <iostream>

using namespace std;

int main()
{
    // Tablero
    char a1 = ' ', a2 = ' ', a3 = ' ', b1 = ' ', b2 = ' ', b3 = ' ', c1 = ' ', c2 = ' ', c3 = ' ';
    int posicion, turno = 1;
    char jugador, cpu;
    
    // Random 2 jugadores
    srand(time(0));
    int aleatorio = rand() % 2;
    if (aleatorio == 0) 
    {
        jugador = 'X';
        cpu = 'O';
        cout << "Empiezas tu (X)" << endl;
    } else {
        jugador = 'O';
        cpu = 'X';
        cout << "Empieza la CPU (X)" << endl;
    }
    
    
    // Tablero
    cout << " " << a1 << " | " << a2 << " | " << a3 << endl;
    cout << "-----------" << endl;
    cout << " " << b1 << " | " << b2 << " | " << b3 << endl;
    cout << "-----------" << endl;
    cout << " " << c1 << " | " << c2 << " | " << c3 << endl;
    
    // Empezamos el juego
    while (true) {
        // Turno del jugador
        if (turno % 2 == 1) {
            cout << "Tu turno (" << jugador << ")" << endl;
            cout << "Introduce la posición donde quieres jugar (1-9): ";
            cin >> posicion;
            while (posicion < 1 || posicion > 9) {
                cout << "Posición no válida, inténtalo de nuevo: ";
                cin >> posicion;
            }
            switch (posicion) {
                case 1:
                    if (a1 == ' ') {
                        a1 = jugador;
                    } else {
                        cout << "Posición ocupada, inténtalo de nuevo." << endl;
                        turno--;
                    }
                    break;
                case 2:
                    if (a2 == ' ') {
                        a2 = jugador;
                    } else {
                        cout << "Posición ocupada, inténtalo de nuevo." << endl;
                        turno--;
                    }
                    break;
                case 3:
                    if (a3 == ' ') {
                        a3 = jugador;
                    } else {
                        cout << "Posición ocupada, inténtalo de nuevo." << endl;
                        turno--;
                    }
                    break;
                case 4:
                    if (b1 == ' ') {
                        b1 = jugador;
                    } else {
                        cout << "Posición ocupada, inténtalo de nuevo." << endl;
                        turno--;
                    }
                    break;
                case 5:
                    if (b2 == ' ') {
                        b2 = jugador;
                    } else {
                        cout << "Posición ocupada, inténtalo de nuevo." << endl;
                        turno--;
                    }
                    break;
                case 6:
                    if (b3 == ' ') {
                        b3 = jugador;
                    } else {
                        cout << "Posición ocupada, inténtalo de nuevo." << endl;
                        turno--;
                    }
                    break;
                case 7:
                if (c1 == ' ') {
                    c1 = jugador;
                } else {
                    cout << "Posición ocupada, inténtalo de nuevo." << endl;
                    turno--;
                }
                break;
            case 8:
                if (c2 == ' ') {
                    c2 = jugador;
                } else {
                    cout << "Posición ocupada, inténtalo de nuevo." << endl;
                    turno--;
                }
                break;
            case 9:
                if (c3 == ' ') {
                    c3 = jugador;
                } else {
                    cout << "Posición ocupada, inténtalo de nuevo." << endl;
                    turno--;
                }
                break;
            default:
                cout << "Posición no válida, inténtalo de nuevo." << endl;
                turno--;
        }
    // Turno de la CPU
    } else {
        cout << "Turno de la CPU (" << cpu << ")" << endl;
        posicion = rand() % 9 + 1;
        switch (posicion) {
            case 1:
                if (a1 == ' ') {
                    a1 = cpu;
                } else {
                    turno--;
                }
                break;
            case 2:
                if (a2 == ' ') {
                    a2 = cpu;
                } else {
                    turno--;
                }
                break;
            case 3:
                if (a3 == ' ') {
                    a3 = cpu;
                } else {
                    turno--;
                }
                break;
            case 4:
                if (b1 == ' ') {
                    b1 = cpu;
                } else {
                    turno--;
                }
                break;
            case 5:
                if (b2 == ' ') {
                    b2 = cpu;
                } else {
                    turno--;
                }
                break;
            case 6:
                if (b3 == ' ') {
                    b3 = cpu;
                } else {
                    turno--;
                }
                break;
            case 7:
                if (c1 == ' ') {
                    c1 = cpu;
                } else {
                    turno--;
                }
                break;
            case 8:
                if (c2 == ' ') {
                    c2 = cpu;
                } else {
                    turno--;
                }
                break;
            case 9:
                if (c3 == ' ') {
                    c3 = cpu;
                } else {
                    turno--;
                }
                break;
        }
        cout << "La CPU juega en la posición " << posicion << endl;
    }
    
    // Tablero fin
    cout << " " << a1 << " | " << a2 << " | " << a3 << endl;
    cout << "---+---+---" << endl;
    cout << " " << b1 << " | " << b2 << " | " << b3 << endl;
    cout << "---+---+---" << endl;
    cout << " " << c1 << " | " << c2 << " | " << c3 << endl;
    
    // JUGADAS COMRPOB
    if ((a1 == jugador && a2 == jugador && a3 == jugador) ||
        (b1 == jugador && b2 == jugador && b3 == jugador) ||
        (c1 == jugador && c2 == jugador && c3 == jugador) ||
        (a1 == jugador && b1 == jugador && c1 == jugador) ||
        (a2 == jugador && b2 == jugador && c2 == jugador) ||
        (a3 == jugador && b3 == jugador && c3 == jugador) ||
        (a1 == jugador && b2 == jugador && c3 == jugador) ||
        (a3 == jugador && b2 == jugador && c1 == jugador)) {
        cout << "¡Has ganado!" << endl;
        break;
        } else if ((a1 == cpu && a2 == cpu && a3 == cpu) ||
        (b1 == cpu && b2 == cpu && b3 == cpu) ||
        (c1 == cpu && c2 == cpu && c3 == cpu) ||
        (a1 == cpu && b1 == cpu && c1 == cpu) ||
        (a2 == cpu && b2 == cpu && c2 == cpu) ||
        (a3 == cpu && b3 == cpu && c3 == cpu) ||
        (a1 == cpu && b2 == cpu && c3 == cpu) ||
        (a3 == cpu && b2 == cpu && c1 == cpu)) {
    cout << "La CPU ha ganado." << endl;
    break;
    } else if (turno == 9) {
    cout << "¡Empate!" << endl;
    break;
    }
    turno++;
    }
}


                   
