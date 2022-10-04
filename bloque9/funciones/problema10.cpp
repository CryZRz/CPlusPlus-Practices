#include<iostream>

using namespace std;

int sumArr(int numsArray[], int);

int main() {

  const int tam = 10;
  int array[tam] = {1, 2, 3, 4, 5, 6, 10, 15, 2, 8};

  cout<<sumArr(array,tam);

  return 0;
}

int sumArr(int numsArray[], int tam){
  int sum = 0;
  for (int i = 0; i < tam; i++) {
    sum += numsArray[i];
  }
  return sum;
}
