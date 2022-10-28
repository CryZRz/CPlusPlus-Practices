#include <iostream>

using namespace std;

struct complejo {
  float real;
  float imaginaria;
}n1, n2;

void pedirDatos();
complejo suma(complejo, complejo);
void muestra(complejo);

int main() {
  pedirDatos();

  complejo x = suma(n1, n2);
  muestra(x);

  return 0;
}

void pedirDatos(){
    cout<<"Ingresa dos numeros complejos"<<endl;
    cout<<"numero real";
    cin>>n1.real;
    cout<<"numero imaginario";
    cin>>n1.imaginaria;

    cout<<"numero real";
    cin>>n2.real;
    cout<<"numero imaginario";
    cin>>n2.imaginaria;
}

complejo suma(complejo z1, complejo z2){
  z1.real += z2.real;
  z1.imaginaria += z2.imaginaria;

  return z1;
}

void muestra(complejo x){
  cout<<"Resultado de la suma"<<x.real<<","<<x.imaginaria<<endl;
}
