#include <iostream>

using namespace std;

int main() {
  float a,b;

  float resultado = 0;

  cout << "Ingresa en numero de a: ";
  cin >> a;

  cout << "Ingresa en numero de b: ";
  cin >> b;

  resultado = a/b + 1;

  cout.precision(2);
  cout << "El resultado es: " <<resultado<<endl;


  return 0;
}
