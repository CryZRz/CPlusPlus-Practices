#include<iostream>
#include<string>
#include<cstring>

using namespace std;

//como lo hice yo
// int main() {
//
//   string nombre = "chrisitian";
//   string nombre2;
//
//   cout<<"Ingrese su nombre";
//   getline(cin,nombre2);
//
//   cout<<"su nombre es"<<nombre2<<endl;
//   cout<<nombre2.length()<<endl;
//
//   return 0;
// }

//como se hizo en el curso
int main() {

  char palabra[] = "hola";
  int longitude = 0;

  longitude = strlen(palabra);

  cout<<"la longitud de la cadena es:"<<longitude<<endl;

  return 0;
}
