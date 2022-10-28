//matrices dinamicas

#include <iostream>
#include <stdlib.h>

using namespace std;

int **punteroMatriz;
int nFilas, nColumnas;

void pedirDatos() {
  cout<<"numero de filas ";
  cin>>nFilas;

  cout<<"numero de columnas";
  cin>>nColumnas;

  punteroMatriz = new int* [nFilas];//reservando memoria para las filas

  for (int i = 0; i < nFilas; i++) {
    punteroMatriz[i] = new int [nColumnas]; //reservando memoria para las columnas
  }

  for (int y = 0; y < nFilas; y++) {
    for (int j = 0; j < nColumnas; j++) {
      cout<<"ingrese un numero["<<y<<"]["<<j<<"]";
      cin>>*(*(punteroMatriz+y)+j);
    }
  }

}

void mostarMatriz(int **punteroMatriz, int nF, int nC){
  for (int i = 0; i < nF; i++) {
    for (int j = 0; j < nC; j++) {
      cout<<*(*(punteroMatriz+i)+j)<<'\n';  //punteroMatriz[i][j]
    }
  }
}

int main() {

  pedirDatos();
  mostarMatriz(punteroMatriz, nFilas, nColumnas);

  for (int i = 0; i < nFilas; i++) {//liberando memoria
    delete[] punteroMatriz[i];
  }

  delete[] punteroMatriz;

  return 0;
}
