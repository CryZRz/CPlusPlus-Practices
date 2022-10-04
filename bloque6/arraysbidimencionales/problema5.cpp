#include <iostream>

using namespace std;

int main() {

  int matrizPrincipal[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
  int matrizSecundaria[3][3];

  for (int i = 0; i < 3; i++) {

    for (int j = 0; j < 3; j++) {

      matrizSecundaria[i][j] = matrizPrincipal[j][i];

    }

  }

  for (int i = 0; i < 3; i++) {

    for (int j = 0; j < 3; j++) {

      cout<<matrizSecundaria[i][j];

    }
    cout<<'\n';
  }

  return 0;
}
