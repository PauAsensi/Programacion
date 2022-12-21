#include <iostream>
#include "Punto.h"

Punto lejano(Punto p, Punto p2){
   Punto origen(0,0);
   double d1 = origen.distancia(p); 
   double d2 = origen.distancia(p2);
   if(d1>d2){
      return p;
   }else{
      return p2;
   }

    
}
int main() {
    Punto p(2,3);
    Punto p2(-2,-5);
    Punto p_lejan=lejano(p,p2);
    std::cout << "(" << p_lejan.getX() << "," << p_lejan.getY() << ")";
} // ()