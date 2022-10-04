#include <iostream>

using namespace std;

void intercambiar(int&, int&);

int main() {

  int num1 = 15, num2=40;

  cout<<"el nuevo valor del numero 1 es:"<<num1<<endl;
  cout<<"el nuevo valor del numero 2 es:"<<num2<<endl;

  intercambiar(num1, num2);

  cout<<"el nuevo valor del numero 1 es:"<<num1<<endl;
  cout<<"el nuevo valor del numero 2 es:"<<num2<<endl;

  return 0;
}

void intercambiar(int& xnum, int& ynum){
  int inner;

  inner = xnum;
  xnum = ynum;
  ynum = inner;
}
