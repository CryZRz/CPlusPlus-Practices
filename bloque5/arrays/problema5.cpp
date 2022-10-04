#include <iostream>

using namespace std;

int main() {

  int numeros[] = {1, 2, 3, 4, 5};
  int numerosX2[5];

  for (int i = 0; i < 5; i++) {
    numerosX2[i] = numeros[i] * 2;
  }

  for (int j = 0; j < 5; j++) {
    cout<<numerosX2[j]<<endl;
  }


  return 0;
}
