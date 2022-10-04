#include <iostream>
#include <cstring>
#include <string>

using namespace std;


int main() {

  char nombre[20];
  char nombre2[20];

  cout<<"ingrsa una lista de caracteres";
  cin.getline(nombre,20,'\n');

  strcpy(nombre2,nombre);

  cout<<nombre2<<endl;

  return 0;
}
