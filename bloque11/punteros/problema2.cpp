#include <iostream>

using namespace std;


int main() {

  int numeros[100];
  int nNumeros;
  int nMayor = 0;
  int *dirNumeros;

  cout<<"numero de elementos para el arreglo";
  cin>>nNumeros;

  for (int i = 0; i < nNumeros; i++) {
    cout<<"Ingresa el numero en la posicion "<<i+1<<endl;
    cin>>numeros[i];
  }

  dirNumeros = numeros;

  for (int i = 0; i < nNumeros; i++) {
    if (*dirNumeros > nMayor) {
      nMayor = *dirNumeros;
    }

    dirNumeros++;
  }

  cout<<"El numero mayor es:"<<nMayor<<endl;

  return 0;
}
