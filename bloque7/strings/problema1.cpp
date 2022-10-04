#include <iostream>
#include <cstring>

using namespace std;

//como lo hice yo
// int main() {
//
//   string nombre;
//
//   cout<<"Ingrese su nombre: ";
//   getline(cin,nombre);
//
//   if (nombre.length()>10) {
//     cout<<"su nombre es mayor a 10 caracteres";
//   }else{
//     cout<<"su nombre no es mayor a 10 caracteres";
//   }
//
//
//   return 0;
// }

//como se hizo en el curso
int main() {

  char palabra[20];
  int longitude = 0;

  cout<<"Ingrese su nombre: ";
  cin.getline(palabra,20,'\n');

  longitude = strlen(palabra);

  if (longitude > 10) {
    cout<<"su nombre es mayor a 10 caracteres";
  }else{
    cout<<"su nombre no es mayor a 10 caracteres";
  }


  return 0;
}
