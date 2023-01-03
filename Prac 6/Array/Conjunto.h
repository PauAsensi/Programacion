// ---------------------------------------------------
// Conjunto.h
// ---------------------------------------------------
#ifndef CONJUNTO_YA_INCLUIDO
#define CONJUNTO_YA_INCLUIDO
#include <iostream>
// ---------------------------------------------------
// ---------------------------------------------------
class Conjunto {
    private:
        int tam;    
        double elementos[500] ;
        
    public:
        Conjunto();
        Conjunto unir(Conjunto c);

        int talla();
        int donde(double n);

        bool contiene(double n);

        void mostrar();
        void anyadir(double n);
        void eliminar(double n);
        void vaciar();

    // completar perfil del resto de método
}; // class
// ---------------------------------------------------
#endif
