#include <iostream>

#include "Punto.h"

void muestraPunto(int * p,int cantidad) {
    for(int i=0;i<cantidad;i++){
        std::cout << p[i] << "\n";
    }
  
}

void ordenar(int * enteros,int cuantos){
    int x,y;
    for(int i=0;i<cuantos;i++){
        for(int j=i+1;j<cuantos;j++){
            x = enteros[i] - enteros[j];
            if(x>0){
                y = enteros[j];
                enteros[j] = enteros[i];
                enteros[i] = y;
            }
        }
    }

}

int main() {
    int enteros[]={1,2,3,4,5,6,7,8,9};
    ordenar(& enteros[0],9);
    muestraPunto(& enteros[0],9);
}
