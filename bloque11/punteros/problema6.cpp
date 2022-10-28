//matrices dinamicas

#include <iostream>
#include <stdlib.h>

using namespace std;

int **punteroMatriz;
int nFilas, nColumnas;

int **punteroMatrizDos;
int nFilasDos, nColumnasDos;

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

void pedirDatosDos() {
  cout<<"numero de filas segunda matriz";
  cin>>nFilasDos;

  cout<<"numero de columnas segunda matriz";
  cin>>nColumnasDos;

  punteroMatrizDos = new int* [nFilasDos];//reservando memoria para las filas

  for (int i = 0; i < nFilasDos; i++) {
    punteroMatrizDos[i] = new int [nColumnasDos]; //reservando memoria para las columnas
  }

  for (int y = 0; y < nFilasDos; y++) {
    for (int j = 0; j < nColumnasDos; j++) {
      cout<<"ingrese un numero["<<y<<"]["<<j<<"]";
      cin>>*(*(punteroMatrizDos+y)+j);
    }
  }

}


void sumarMatriz(int **punteroMatriz, int **punteroMatrizDos, int nF, int nC) {
  for (int i = 0; i < nF; i++) {
    for (int j = 0; j < nC; j++) {
      cout<<*(*(punteroMatriz+i)+j) + *(*(punteroMatrizDos+i)+j)<<'\n';  //punteroMatriz[i][j]
    }
  }
}

int main() {

  pedirDatos();
  pedirDatosDos();
  sumarMatriz(punteroMatriz, punteroMatrizDos, nFilas, nColumnas);

  for (int i = 0; i < nFilas; i++) {//liberando memoria
    delete[] punteroMatriz[i];
  }

  delete[] punteroMatriz;

  for (int i = 0; i < nFilasDos; i++) {//liberando memoria
    delete[] punteroMatrizDos[i];
  }

  delete[] punteroMatrizDos;

  return 0;
}
