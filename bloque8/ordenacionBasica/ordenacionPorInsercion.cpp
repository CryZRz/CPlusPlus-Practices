#include<iostream>

using namespace std;

int main() {

  int array[] = {4, 2, 3, 1, 5};
  int pos;
  int aux;

  for (int i = 0; i < 5; i++) {
    pos = i;
    aux = array[i];

    while (pos > 0 && array[pos-1] > aux) {
      array[pos] = array[pos-1];
      pos--;
    }
    array[pos] = aux;
  }

  for (int i = 0; i < 5; i++) {
    cout<<array[i]<<endl;
  }

  for (int i = 4; i >= 0; i--) {
    cout<<array[i]<<endl;
  }

  return 0;
}
