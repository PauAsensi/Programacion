#include <iostream>
using namespace std;

int sumatorioSB(int n) { 
    return (n*(n+1))/2; 
}

int sumatorio(int n) { 
    int i,suma=0;
    for(i=0;i<=n;i++){
        suma=suma+i;
    }
    return suma;
}

int main() {
  int numero;
  std::cout << "Dime un numero";
  cin >> numero;
  std::cout << sumatorio(numero);
}

