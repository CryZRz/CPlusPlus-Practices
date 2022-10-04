#include<iostream>

using namespace std;

void cuadradoArray(int numsArray[], int);

int main() {

  const int tam = 5;
  int array[tam] = {1, 2, 3, 4, 5};

  cuadradoArray(array,tam);

  return 0;
}

void cuadradoArray(int numsArray[], int tam){
  for (int i = 0; i < tam; i++) {
    cout<<numsArray[i] * numsArray[i]<<endl;
  }
}
