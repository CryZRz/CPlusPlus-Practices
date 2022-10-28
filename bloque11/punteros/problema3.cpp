#include <iostream>
#include <stdlib.h>

using namespace std;

int nElemntos, *elemento;

void pedirDatos(){
  cout<<"Ingresa el numero de elemntos del arreglo";
  cin>>nElemntos;

  elemento = new int[nElemntos];

  for (int i = 0; i < nElemntos; i++) {
    cout<<"Ingresa un numero";
    cin>>*(elemento+i);
  }
}

void buscarElemnto(int *elemento, int nE){
  int nBuscar;
  bool bandera = false;

  cout<<"¿Que numero deseas buscar?";
  cin>>nBuscar;

  for (int i = 0; i < nE; i++) {
    if (*(elemento+i) == nBuscar) {
      cout<<"el numero "<<nBuscar<<" esta en la posicion: "<<i<<endl;
      bandera = true;
    }
  }

  if (bandera == false) {
    cout<<"el numero no esta en el arreglo"<<endl;
  }

}

int main() {

    pedirDatos();
    buscarElemnto(elemento, nElemntos);

    delete[] elemento;//liberamos memoria utitlizada para el arreglo

  return 0;
}
