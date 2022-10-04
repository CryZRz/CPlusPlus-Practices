#include <iostream>
#include <cstring>

using namespace std;


int main() {

  char nombre[20] = "christian";
  char nombre2[20] = "christian";

  if (strcmp(nombre,nombre2)==0) {
    cout<<"ambas cadenas son iguales";
  }

  return 0;
}
