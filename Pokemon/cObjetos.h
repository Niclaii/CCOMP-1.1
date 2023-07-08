#include <iostream>

class Objeto 
{
    
    private:
        int* objetos; // Array din�mico de punteros a enteros
        int size; // Tama�o del array
    
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
    
        // M�todo para asignar un nuevo objeto (entero)
        void asignarObjeto();
    
        // M�todo para manipular un objeto existente
        void manipularObjeto(int);
    
        // M�todo para visualizar los objetos
        void visualizarObjetos();
    
    
};
