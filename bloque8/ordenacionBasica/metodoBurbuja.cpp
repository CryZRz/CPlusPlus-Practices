#include<iostream>

using namespace std;

int main() {

  int array[] = {4, 1, 2, 3, 5};
  int aux;//4

  //algoritmo del metodo burbujas
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      if (array[j] > array[j+1]) {
        aux = array[j];
        array[j] = array[j+1];
        array[j+1] = aux;

      }
    }
  }

  for (int i = 0; i < 5; i++) {
    cout<<array[i]<<endl;
  }

  for (int i = 4; i >= 0; i--) {
    cout<<array[i]<<endl;
  }

  return 0;
}
