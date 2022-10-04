//Paso de parametros por referencia

#include <iostream>

using namespace std;

void valNuevo(int&, int&);

int main() {

  int num1, num2;

  cout<<"ingrese un numero";
  cin>>num1;
  cout<<"ingrese un numero";
  cin>>num2;

  valNuevo(num1, num2);

  cout<<"el nuevo valor del numero 1 es:"<<num1<<endl;
  cout<<"el nuevo valor del numero 2 es:"<<num2<<endl;

  return 0;
}

void valNuevo(int& xnum, int& ynum){
  cout<<"el primer valor es: "<<xnum<<endl;
  cout<<"el segundo valor es: "<<ynum<<endl;

  xnum = 55;
  ynum = 3;

}
