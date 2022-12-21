#include <iostream>
#include "Punto.h"

int queCuadrante(Punto p){
    int cuadrante=0;
    if(p.getX() > 0.0 && p.getY()> 0.0){
       cuadrante=1;
    }else if(p.getX() > 0.0 && p.getY() < 0.0){
       cuadrante=4;
    }else if(p.getX() < 0.0 && p.getY() < 0.0){
       cuadrante=3;
    }else{
       cuadrante=2;
    }
    return cuadrante;
}

int main() {
    Punto p(-3,-8);
    std::cout << "Cuadrante " << queCuadrante(p);
} // ()