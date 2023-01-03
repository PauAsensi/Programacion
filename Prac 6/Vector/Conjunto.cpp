// ---------------------------------------------------
// Conjunto.cpp
// g++ -c Conjunto.cpp
// ---------------------------------------------------
#include "Conjunto.h"
#include <iostream>
#include <algorithm>
#include <iterator>

// ---------------------------------------------------
// Constructor de la clase , no hace ninguna accion
// ---------------------------------------------------
Conjunto::Conjunto(){} // ()

// ---------------------------------------------------
// Une dos conjuntos creando uno nuevo y lo devuelve
// ---------------------------------------------------
Conjunto Conjunto::unir(Conjunto c){
    Conjunto r;
    for(int i=0; i < talla();i++){//Repite el bucle mientras i sea menor que el tamaño del vector actual
        r.anyadir(elementos[i]);//Añade el valor al nuevo vector
    }
    for(int i=0; i < c.talla();i++){//Repite el bucle mientras i sea menor que el tamaño del segundo vector 
        r.anyadir(c.elementos[i]);//Añade el valor al nuevo vector
    }
    return r;
}

// ---------------------------------------------------
//Devuelve el tamaño del vector
// ---------------------------------------------------
int Conjunto::talla(){
   return elementos.size();
} // ()

// ---------------------------------------------------
//Mete el N en el vector de elementos
// ---------------------------------------------------
void Conjunto::anyadir(double n){
    elementos.push_back(n);
} // ()


// ---------------------------------------------------
//Elimina el valor N del vector de elementos
// ---------------------------------------------------
void Conjunto::eliminar(double n){
    elementos.erase(std::find(elementos.begin(), elementos.end(), n));
} // ()

// ---------------------------------------------------
//Vacia el array
// ---------------------------------------------------
void Conjunto::vaciar(){
    elementos.clear();
   
} // ()

// ---------------------------------------------------
//Recorre el vector y muestra los elementos que lo forman
// ---------------------------------------------------
void Conjunto::mostrar(){
    std::cout << "[ ";
    for(int i=0;i<talla();i++){ //Repite el bucle mientras i sea menor que el tamaño del vector de elementos
        std::cout << elementos[i] << " ";
    }
    std::cout << "]\n";   
} // ()