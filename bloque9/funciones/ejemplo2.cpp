//plantullas de funciones

#include<iostream>

using namespace std;

//prototipo de funcion
template <class tipode>
void mostrarAbs(tipode numero);

int econtrarMax(int x, int y);

int main() {
  int n1 = 4;
  int num2 = -56.67;
  int num3 = 123.5678;

  mostrarAbs(n1);
  mostrarAbs(num2);
  mostrarAbs(num3);

  return 0;
}

template <class tipode>
void mostrarAbs(tipode numero){
  if (numero < 0) {
    numero = numero * -1;
  }

  cout<<"el valor absoluto de numero es:"<<numero<<endl;
}
