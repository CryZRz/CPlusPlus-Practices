#include<iostream>

using namespace std;


int main() {

  int numeros[100][100], columnas, filas;

  cout<<"Ingrese el numero de filas";
  cin>>filas;

  cout<<"Ingrese el numero de columnas";
  cin>>columnas;


  for (int i = 0; i < filas; i++) {

    for (int j = 0; j < columnas; j++) {
      cout<<"Ingrese un numero para la amtriz"<<i<<j;
      cin>>numeros[i][j];
    }

  }

  if (filas == columnas) {
    cout<<"La matriz es siemtrica";
  }else{
    cout<<"La matriz no es simetrica";
  }

  return 0;
}
