#include <iostream>

using namespace std;

void intercambio(float *dirNum1, float *dirNum2){
    float aux;

    aux = *dirNum1;
    *dirNum1 = *dirNum2;
    *dirNum2 = aux;
}

int main() {

  float num1 = 20.8, num2 = 6.78;

  cout<<num1<<endl<<num2<<endl;

  intercambio(&num1, &num2);

  cout<<num1<<endl<<num2<<endl;

  return 0;
}
