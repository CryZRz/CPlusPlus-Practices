#include<iostream>

using namespace std;

int validateOrder(int numsArray[], int);

int main() {

  const int tam = 6;
  int array[tam] = {1, 2, 3, 4, 5, 6};

  if (validateOrder(array,tam) == 0) {
    cout<<"el arreglo no esta ordenado";
  }else{
    cout<<"el arreglo sta ordenado";
  }

  return 0;
}

int validateOrder(int numsArray[], int tam){
  int result;

  for (int i = 0; i < tam-1; i++) {
    if (!numsArray[i] >= numsArray[i+1]) {
      result =  0;
    }else{
      result = 1;
    }
  }

  return result;
}
