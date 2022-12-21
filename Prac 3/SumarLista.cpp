#include <iostream>
using namespace std;

double sumarLista(int *lista,int tam) { 
    double suma=0;
    for(int i=0;i<tam;i++){
        suma=suma+lista[i];
    }
    return suma;
}

int main() {
  int tam=5;
  int lista[tam]={2,2,2,2,2};

  double suma=sumarLista(&lista[0] ,tam);

   std::cout << suma;
 
 
}

