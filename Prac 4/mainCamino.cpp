#include <iostream>
#include "Punto.h"

double camino(Punto * pLista,int cuantos){
   int suma=0;
   int j=1;
   for(int i=0;i<cuantos;i++){
      suma=suma+pLista[i].distancia(pLista[j]);
      j++;
   }

   return suma;
}
int main() {
   Punto lista[]={Punto(2,4),Punto(-2,-5),Punto(4,6),Punto(5,-3)};
   double p=camino(& lista[0],4);

   std::cout << "Distancia: " << p;
} // ()