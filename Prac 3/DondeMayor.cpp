#include <iostream>
using namespace std;

int dondeEstaElMayor(int *lista,int tam) { 
    int masGrande=lista[0];
    for(int i=0;i<tam;i++){
        if(lista[i]>masGrande){
            masGrande=lista[i];
        }
        
    }
    return masGrande;
}

int main() {
  int tam=5;
  int lista[tam]={2,2,3,2,2};

  int grande=dondeEstaElMayor(&lista[0] ,tam);

   std::cout << grande;
 
 
}

