#include <iostream>

using namespace std;

int main() {

  int num, *dirNum;

  cout<<"Ingrese un numero";
  cin>>num;

  dirNum = &num; //guardando posicion de memoria

  if (*dirNum % 2 == 0) {
    cout<<"El numero es par"<<*dirNum<<endl;
    cout<<"Posicion: "<<dirNum<<endl;
  } else {
    cout<<"El numero es impar"<<*dirNum<<endl;
    cout<<"Posicion: "<<dirNum<<endl;
  }

  return 0;
}
