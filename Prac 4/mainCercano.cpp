#include <iostream>
#include "Punto.h"

int cercano(Punto * pLista,int cuantos){
   Punto origen(0,0);
   int posicion=0;
   for(int i=0;i<cuantos;i++){
      if(origen.distancia(pLista[posicion]) > origen.distancia(pLista[i]) ){
         posicion=i;
      }
   }
   return posicion;
}
int main() {
   Punto lista[]={Punto(2,4),Punto(-2,-5),Punto(4,6),Punto(5,-3)};
   int p=cercano(& lista[0],4);

   std::cout << "(" << lista[p].getX() << "," << lista[p].getY() << ")";
} // ()