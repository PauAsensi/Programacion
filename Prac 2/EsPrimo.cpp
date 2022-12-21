#include <iostream>
using namespace std;

bool esPrimo(int n) {
  
  if (n == 0 || n == 1 || n == 4) {
    return false;
  }

  for (int x = 2; x < n/2; x++) {
    if (n % x == 0){
        return false;
    }   
  }
  
  return true;
}

int main() {
  int numero;
  std::cout << "Dime un nmero:";
  cin >> numero;
  if(esPrimo(numero)){
    std::cout << "Es primo";
  }else{
    std::cout << "No es primo";
  }
  
}

