#include <iostream>

using namespace std;


int main() {

  int numeros[10], *dirNumeros;

  for (int i = 0; i < 10; i++) {
    cout<<"Ingresa un numero:";
    cin>>numeros[i];
  }

  dirNumeros = numeros;

  for (int i = 0; i < 10; i++) {
    if (*dirNumeros % 2 == 0) {
      cout<<*dirNumeros<<"es par"<<endl;
      cout<<dirNumeros<<"posicion de memoria"<<endl;
    }
    dirNumeros++;
  }


  return 0;
}
