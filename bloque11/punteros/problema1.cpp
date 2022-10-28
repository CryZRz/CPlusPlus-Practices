#include <iostream>

using namespace std;

int main() {

  int num, *dirNum, count;

  cout<<"Ingrese un numero";
  cin>>num;

  dirNum = &num; //guardando posicion de memoria

  for (int i = 1; i < *dirNum; i++) {
    if (*dirNum%i==0) {
      count++;
    }
  }

  if (count>2) {
    cout<<"el numero: "<<*dirNum<<"no es primo"<<endl;
    cout<<"posicion: "<<dirNum<<endl;
  }else{
    cout<<"el numero: "<<*dirNum<<"es primo"<<endl;
    cout<<"posicion: "<<dirNum<<endl;
  }

  return 0;
}
