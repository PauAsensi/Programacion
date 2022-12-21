#include <iostream>
using namespace std;

bool esPositivo(int a) { 
    if(a>=0){
        return true;
    }else{
        return false;
    } 
}

int main() {
  int numero;
  std::cout << "Dime un numero";
  cin >> numero;

  if(esPositivo(numero)){
     std::cout << "Es positivo";
  }else{
     std::cout << "Es negativo";
  }
 
}

