#include<iostream>
#include<string>
#include<cstring>

using namespace std;

//como lo hice yo
int main() {

  string nombre;
  string nombre2;

  cout<<"Ingrese su nombre";
  getline(cin,nombre);

  nombre2 = nombre;

  cout<<nombre2;

  return 0;
}


//como se hizo en el curso
int main() {

  char palabra1[] = "christian";
  char palabra2[] = {'c','h','r','i','s'};
  char nombre[10];

  cout<<palabra1<<endl;
  cout<<palabra2<<endl;

  cout<<"Ingrese su nombre:";
  //gets(nombre);//no se usa porque excede el valor de caracteres establecido
  cin.getline(nombre,20,'\n');
  cout<<nombre;

  return 0;
}
