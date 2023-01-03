#include <iostream>
#include "Conjunto.h"

void probarTalla() {
    Conjunto c1;
    if ( c1.talla() != 0 ) {
        std::cout << "mmm, parece que no va bien talla()\n";
        return; // pues termino
    }
    std::cout << "parece que talla() va bien \n";
}

void probarAnyadir(double n) {
    Conjunto c1;
    c1.anyadir(n);
    std::cout << "Prueba Añadir: ";
    c1.mostrar();
}
void probarEliminar(double n) {
    Conjunto c1;
    c1.anyadir(n);
    c1.eliminar(n);
    std::cout << "Prueba Eliminar: ";
    c1.mostrar();
   
}

void probarUnir() {
    std::cout << "Prueba Unir: \n";
    Conjunto c1;
    c1.anyadir(1.2);
    std::cout << "  -Conjunto 1: ";
    c1.mostrar();

    Conjunto c2;
    c2.anyadir(2.4);
    std::cout << "  -Conjunto 2: ";
    c2.mostrar();

    Conjunto resultado=c1.unir(c2);
    std::cout << "  -Resultado: ";
    resultado.mostrar();
}

int main() {  
    double num_pruebas=3.2;
    probarAnyadir(num_pruebas);
    probarEliminar(num_pruebas);
    probarUnir();
}
