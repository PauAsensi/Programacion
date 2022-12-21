#include <iostream>
using namespace std;

void fibonacci(int n) { 
    int i,fibonacci=1;
    for(i=0;i<=n;i++){
        fibonacci=(fibonacci+fibonacci+1);
    }
}

int main() {
  int numero;
  std::cout << "Dime un numero";
  cin >> numero;
  std::cout << sumatorioPares(numero);
}

