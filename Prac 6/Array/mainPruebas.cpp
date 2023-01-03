#include <iostream>
#include "Conjunto.h"

void probarTalla() {
    
    Conjunto c1;
    unsigned int a = c1.talla();
    if ( a != 0 ) {
        std::cout << "mmm, parece que no va bien talla()\n";
        return; // pues termino
    }
    std::cout << "parece que talla() va bien \n";
}

void probarAnyadirYContiene(double n) {
    Conjunto c1;
    c1.anyadir(n);
    if(c1.contiene(n)){
        std::cout << "parece que anyadir() y contiene() van bien \n";
    }else{
        std::cout << "mmm, parece que anyadir() y contiene() no van bien\n";
    }
}

void probarDonde(double n) {
    Conjunto c1;
    c1.anyadir(n);

    if(c1.donde(n) == 0){
        std::cout << "parece que donde() va bien \n";
    }else{
        std::cout << "mmm, parece que donde() no va bien\n";
    }
}


void probarEliminar(double n) {
    Conjunto c1;
    c1.anyadir(n);
    int a=c1.donde(n);
    c1.eliminar(n);
    if(c1.donde(n) == -1){
        std::cout << "parece que eliminar() va bien \n";
    }else{
        std::cout << "mmm, parece que eliminar() no va bien\n";
    }
}

void probarUnir() {
    Conjunto c1;
    c1.anyadir(1.2);
    Conjunto c2;
    c2.anyadir(2.4);
    Conjunto resultado=c1.unir(c2);
    if(resultado.contiene(1.2) && resultado.contiene(2.4)){
        std::cout << "parece que unir() va bien \n";
    }else{
        std::cout << "mmm, parece que unir() no va bien\n";
    }
}

int main() {  
    double num_pruebas=3.2;
    probarTalla();
    probarAnyadirYContiene(num_pruebas);
    probarDonde(num_pruebas);
    probarEliminar(num_pruebas);
    probarUnir();
}
