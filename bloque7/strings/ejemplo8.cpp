#include <iostream>
#include <cstring>
#include <string.h>
#include <strings.h>

using namespace std;

int main(){

    string cadena = "chistian";

  cout << "Original: " + cadena;

  for (int i = 0; i < cadena.length(); i++) {
    cadena[i] = toupper(cadena[i]);
  }
  
  cout<<"Mayúscula: "<<cadena;

    return 0;
}