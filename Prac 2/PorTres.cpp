#include <iostream>
using namespace std;

int porTres(int a) { return a * 3; }

int main() {
  int numero;
  std::cout << "Dime un numero";
  cin >> numero;
  std::cout << porTres(numero);
}

