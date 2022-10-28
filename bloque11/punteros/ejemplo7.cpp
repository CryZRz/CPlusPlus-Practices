#include <iostream>

using namespace std;

int numMx(int *dirNum, int e){
    int max;

    for (int i = 0; i < e; i++) {
      if (*(dirNum+i) > max) {
        max = *(dirNum+i);
      }
    }

    return max;
}

int main() {

  const int nElementos = 5;

  int numeros[nElementos] = {1, 2, 10, 4, 5};

  cout<<"el numero mayo es"<< numMx(numeros, nElementos)<<endl;

  return 0;
}
