#include <iostream>
using namespace std;

int sumatorioPares(int n) { 
    int i,suma=0;
    for(i=0;i<=n;i++){
        if(i%2==0){
           suma=suma+i; 
        }
        
    }
    return suma;
}

int main() {
  int numero;
  std::cout << "Dime un numero";
  cin >> numero;
  std::cout << sumatorioPares(numero);
}

