#include <iostream>

using namespace std;

int main() {

  int matrizPrincipal[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
  int matrizSecundaria[3][3] = {{8,9,10},{11,12,13},{14,15,16}};

  for (int i = 0; i < 3; i++) {

    for (int j = 0; j < 3; j++) {

      cout<<matrizPrincipal[i][j]+ matrizSecundaria[i][j];

    }
    cout<<'\n';
  }

  return 0;
}
