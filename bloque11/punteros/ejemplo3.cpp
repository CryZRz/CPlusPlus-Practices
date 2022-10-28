#include <iostream>

using namespace std;

int main() {

  int numeros[] = {1, 2, 3, 4, 5};
  int *dirNumeros;

  dirNumeros = numeros;//guarda la pirmer posicion del array

  for (int i = 0; i < 5; i++) {
    cout<<"Elementos del array: ["<<i<<"]"<<*dirNumeros++<<endl;
    //cout<<"posicion de memoria : ["<<i<<"]"<<dirNumeros++<<endl;
  }


  return 0;
}
