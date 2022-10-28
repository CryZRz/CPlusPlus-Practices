#include <iostream>

using namespace std;

int main() {

  int num, *dirNum;

  num = 20;

  dirNum = &num;

  cout<<"Numero: "<<num<<endl;

  cout<<"Direccion de memoria: "<<&num<<endl;

  cout<<"Numero: "<<*dirNum<<endl;//imprime el valor dentro del puntero

  cout<<"Direccion de memoria: "<<dirNum<<endl;//imprime la direccion de memoria guardada en la variable

  return 0;
}
