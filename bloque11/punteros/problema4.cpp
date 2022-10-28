#include <iostream>
#include <stdlib.h>

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

void encontrarVocales(char *e, int nE) {
  char vocales[5] = {'a', 'e', 'i', 'o', 'u'};
  int contador = 0;

  for (int i = 0; i < nE; i++) {
    for (int y = 0; y < nE; y++) {
      if (*(e+i) == vocales[y]) {
        contador++;
      }
    }
  }

  cout<<"el nombre tiene: "<<contador<<" vocales"<<endl;

}

int main() {

  pedirNombre();
  encontrarVocales(elemento, nElemntos);

  delete[] elemento;

  return 0;
}
