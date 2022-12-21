#include <iostream>
using namespace std;

bool contiene(int *lista,int tam,int n) { 
    bool esta=false;
    for(int i=0;i<tam;i++){
        if(lista[i]==n){
            esta=true;
        }
        
    }
    return esta;
}

int main() {
  int tam=5;
  int lista[tam]={2,2,3,2,4};

 

  if(contiene(&lista[0],tam,4)){
    std::cout << "ESTA";
  }else{
    std::cout << "NO ESTA";
  }
   
 
 
}

