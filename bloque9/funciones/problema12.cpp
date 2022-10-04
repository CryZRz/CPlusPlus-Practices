#include<iostream>

using namespace std;

void changeSing(int numsArray[], int);

int main() {

  const int tam = 6;
  int array[tam] = {1, 2, 3, 4, 5, 6};

  changeSing(array, tam);

  return 0;
}

void changeSing(int numsArray[], int tam){
  int result;

  for (int i = 0; i < tam ; i++) {
    cout<<numsArray[i] * -1<<endl;
  }

}
