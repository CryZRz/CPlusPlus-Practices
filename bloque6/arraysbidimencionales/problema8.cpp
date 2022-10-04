#include<iostream>

using namespace std;

int main() {

  int A[3][3] = {{1,2,1}, {2,1,1}, {2,1,2}};
  int B[3][3] = {{3,2,1}, {2,3,1}, {1,1,3}};
  int C[3][3];

  for (int i = 0; i < 3; i++) {

    for (int j = 0; j < 3; j++) {
      C[i][j] = 0;

      for (int y = 0; y < 3; y++) {
        C[i][j] += A[i][y]*B[y][j];
      }

    }

  }

  for (int i = 0; i < 3; i++) {

    for (int j = 0; j < 3; j++) {
      cout<<C[i][j];
    }
    cout<<endl;
  }


  return 0;
}
