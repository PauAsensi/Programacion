#include <iostream>
using namespace std;

int filtrar(int *lista,int tam) { 
    int listaPositiva[tam];
    int cont=0;
    for(int i=0;i<tam;i++){
      
        if(lista[i]>0){
          listaPositiva[cont]=lista[i];
          cont++;
        }
        
    }
    return listaPositiva[tam];
}

int main() {
  int tam=5;
  int lista[tam]={2,2,3,2,4};

  int listaPos=filtrar(&lista[0],tam);
  
}

