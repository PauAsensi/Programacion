// ---------------------------------------------------
// Conjunto.cpp
// g++ -c Conjunto.cpp
// ---------------------------------------------------
#include "Conjunto.h"
#include <iostream>
// ---------------------------------------------------
//Constructor de la clase
// ---------------------------------------------------
Conjunto::Conjunto()
{
    tam=0;
    //inicializamos el tamaño de la array de elementos a 0
   
} // ()

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
//Devuelve el tamaño de la array de reales
// ---------------------------------------------------
int Conjunto::talla(){
   return tam;
} // ()

// ---------------------------------------------------
//Devuelve la posicion del array donde se encuentra n
// ---------------------------------------------------
int Conjunto::donde(double n){
    int posicion=-1;
    for(int i=0;i<=tam;i++){
        if(elementos[i]==n){
            posicion=i;
        }
    }
    return posicion;
} // ()

// ---------------------------------------------------
//Comprueba si n esta en el conjunto
// ---------------------------------------------------
bool Conjunto::contiene(double n){
    if(donde(n) < 0 ){
        return false;
    }
    return true;
} // ()

// ---------------------------------------------------
//Añade N a el array de elemtnos
// ---------------------------------------------------
void Conjunto::anyadir(double n){
    //Compruba si ya esta en el array 
    if(!contiene(n)){
        //Si no esta en el array lo añade y le suma uno al tamaño
        elementos[tam]=n;
        tam++;
    }
    
} // ()


// ---------------------------------------------------
//Comprueba si n esta en el conjunto
// ---------------------------------------------------
void Conjunto::eliminar(double n){
    int posicion=donde(n);
    if (posicion != -1){

        for(int i=posicion;i<tam-1;i++){
            elementos[i]=elementos[i+1];
        }

        tam--;      
    }
    
} // ()

// ---------------------------------------------------
//Vacia el array
// ---------------------------------------------------
void Conjunto::vaciar(){
    for(int i=0;i<tam;i++){
        elementos[i]=0.0;
    }
    tam=0;
   
} // ()

// ---------------------------------------------------
//Muestra el array
// ---------------------------------------------------
void Conjunto::mostrar(){
    std::cout << "[ ";
    for(int i=0;i<tam;i++){
        std::cout << elementos[i] << "  ";
    }
    std::cout << "]\n";   
} // ()