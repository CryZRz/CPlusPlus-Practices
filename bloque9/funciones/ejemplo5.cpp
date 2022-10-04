//enviar matriz como parametros en una funcion

#include<iostream>

using namespace std;

void showMatriz(int m[][3], int, int);//requiere forsozamente el numero de columnas en los parametros
void mSquared(int m[][3], int, int);

int main() {

    const int nRows = 2;
    const int nColums = 3;
    int n[nRows][nColums] = {{1, 2, 3}, {4, 5, 6}};

    showMatriz(n, nRows, nColums);
    mSquared(n, nRows, nColums);

  return 0;
}

void showMatriz(int m[][3], int r, int c){
  cout<<"show matriz before:"<<endl;
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      cout<<m[i][j];
    }
    cout<<'\n';
  }
}

void mSquared(int m[][3], int r, int c){
  cout<<"show matriz after:"<<endl;
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      cout<<m[i][j] * m[i][j];
    }
    cout<<'\n';
  }
}
