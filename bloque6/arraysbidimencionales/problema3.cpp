#include <iostream>

using namespace std;

 int main() {

  int matrizPrincipal[2][2] = {{1,2}, {3,4}};
  int matrizSecundaria[2][2];

  for (int i = 0; i < 2; i++) {

    for (int j = 0; j < 2; j++) {
      matrizSecundaria[i][j] = matrizPrincipal[i][j];
    }

  }

  for (int i = 0; i < 2; i++) {

    for (int j = 0; j < 2; j++) {
      cout<<matrizSecundaria[i][j];
    }
    cout<<'\n';
  }


  return 0;
}
