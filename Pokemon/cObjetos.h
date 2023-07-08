#include <iostream>

class Objeto 
{
    
    private:
        int* objetos; // Array dinámico de punteros a enteros
        int size; // Tamaño del array
    
    public:
        // Constructor
        Objeto() 
        {
            size = 0;
            objetos = new int[5];
        }
    
        // Destructor para liberar la memoria
        ~Objeto()
        {
            delete[] objetos; // Liberar la memoria del array
        }
    
        // Método para asignar un nuevo objeto (entero)
        void asignarObjeto();
    
        // Método para manipular un objeto existente
        void manipularObjeto(int);
    
        // Método para visualizar los objetos
        void visualizarObjetos();
    
    
};
