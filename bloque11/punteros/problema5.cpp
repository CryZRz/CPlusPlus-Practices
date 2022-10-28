#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

int nElemntos;
char *elemento;

void pedirNombre() {
    cout<<"Cunatas letras tiene tu nombre";
    cin>>nElemntos;

    elemento = new char [nElemntos];

    for (int i = 0; i < nElemntos; i++) {
      cout<<"ingresa la vocal "<<i<<" de tu nombre";
      cin>>*(elemento+i);
    }

}

void encontrarNumeroVocales(char *e, int nE) {
  int contadorA = 0;
  int contadorE = 0;
  int contadorI = 0;
  int contadorO = 0;
  int contadorU = 0;

  for (int i = 0; i < nE; i++) {
    if (*(e+i) == 'a') {
      contadorA++;
    }
    else if (*(e+i) == 'e') {
      contadorE++;
    }
    else if (*(e+i) == 'i') {
      contadorI++;
    }
    else if (*(e+i) == 'o') {
      contadorO++;
    }
    else if (*(e+i) == 'u') {
      contadorU++;
    }
  }

  cout<<"el nombre tiene: "<<contadorA<<" de vocales a"<<endl;
  cout<<"el nombre tiene: "<<contadorE<<" de vocales e"<<endl;
  cout<<"el nombre tiene: "<<contadorI<<" de vocales i"<<endl;
  cout<<"el nombre tiene: "<<contadorO<<" de vocales o"<<endl;
  cout<<"el nombre tiene: "<<contadorU<<" de vocales u"<<endl;

}

int main() {

  pedirNombre();
  encontrarNumeroVocales(elemento, nElemntos);

  delete[] elemento;

  return 0;
}
