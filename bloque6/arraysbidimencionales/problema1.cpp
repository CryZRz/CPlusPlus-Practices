#include <iostream>

using namespace std;

int main() {

  int numeros[100][100];
  int filas, columnas;

  cout<<"Ingrese el numero de filas";
  cin>>filas;

  cout<<"Ingrese el numero de columnas";
  cin>>columnas;

  for (int i = 0; i < filas ; i++) {

    for (int j = 0; j < columnas; j++) {
        cout<<"Ingrese un numero["<<i<<"]["<<i<<"]: ";
        cin >>numeros[i][j];
    }
  }

  for (int i = 0; i < filas ; i++) {

    for (int j = 0; j < columnas; j++) {
        cout<<numeros[i][j];
    }
    cout<<"\n";
  }

  cout<<numeros;

  return 0;
}
