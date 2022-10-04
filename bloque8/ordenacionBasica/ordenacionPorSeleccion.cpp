#include<iostream>

using namespace std;

int main () {

  int array[] = {3, 2, 1, 5, 4};
  int aux;
  int min;

  for (int i = 0; i < 5; i++) {
    min = i;//1//2
    for (int j = i+1; j < 5; j++) {
      if (array[j] < array[min]) {
        min = j;
      }
    }
    aux = array[i];
    array[i] = array[min];
    array[min] = aux;
  }

  for (int i = 0; i < 5; i++) {
    cout<<array[i]<<endl;
  }

  for (int i = 4; i >= 0; i--) {
    cout<<array[i]<<endl;
  }

  return 0;
}
