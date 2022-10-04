#include<iostream>

using namespace std;

int showMatriz(int m[][3], int, int);

int main() {

    const int nRows = 2;
    const int nColums = 3;
    int n[nRows][nColums] = {{4, 2, 3}, {4, 1, 6}};

    cout<<showMatriz(n, nRows, nColums);

  return 0;
}

int showMatriz(int m[][3], int r, int c){
  int min = m[0][0];

  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      if (m[i][j] < min) {
        min = m[i][j];
      }
    }
  }

  return min;
}
