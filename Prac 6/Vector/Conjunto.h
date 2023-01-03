// ---------------------------------------------------
// Conjunto.h
// ---------------------------------------------------
#ifndef CONJUNTO_YA_INCLUIDO
#define CONJUNTO_YA_INCLUIDO
#include <vector>
#include <iostream>

// ---------------------------------------------------
// ---------------------------------------------------
class Conjunto {
    private:  
        std::vector<double> elementos; 
        
    public:
        Conjunto();
        Conjunto unir(Conjunto c);

        int talla();

        void mostrar();
        void anyadir(double n);
        void eliminar(double n);
        void vaciar();

    // completar perfil del resto de método
}; // class
// ---------------------------------------------------
#endif
