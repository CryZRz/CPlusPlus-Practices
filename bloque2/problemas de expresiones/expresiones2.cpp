#include <iostream>

using namespace std;

int main() {

  float a,b,c,d,resultado = 0;

  cout << "Ingrese en numero para a";
  cin >> a;

  cout << "Ingrese en numero para b";
  cin >> b;

  cout << "Ingrese en numero para c";
  cin >> c;

  cout << "Ingrese en numero para d";
  cin >> d;

  resultado = (a+b) / (c+d);

  cout << "El resultado es:" <<resultado;


  return 0;
}
