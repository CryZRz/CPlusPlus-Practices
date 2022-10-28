#include <iostream>

using namespace std;


struct notas{
  float nota1;
  float nota2;
  float nota3;
};

struct alumnos{
  char nombre[20];
  char sexo[10];
  int edad;
  struct notas prom;
}alumno;

int main() {

  float promedio = 0;

  cout<<"Ingrese el nombre del alumno: ";
  cin.getline(alumno.nombre, 20, '\n');
  cout<<"Ingrese el sexo del alumno: ";
  cin.getline(alumno.sexo, 20, '\n');
  cout<<"Ingrese la edad del alumno: ";
  cin>>alumno.edad;

  cout<<"Ingrese la primer nota del alumno:";
  cin>>alumno.prom.nota1;
  cout<<"Ingrese la segunda nota del alumno:";
  cin>>alumno.prom.nota2;
  cout<<"Ingrese la tercera nota del alumno:";
  cin>>alumno.prom.nota3;

  promedio = (alumno.prom.nota1 + alumno.prom.nota2 + alumno.prom.nota3)/3;

  cout<<"nombre: "<<alumno.nombre<<endl;
  cout<<"sexo: "<<alumno.sexo<<endl;
  cout<<"edad: "<<alumno.edad<<endl;
  cout<<"promedio: "<<promedio<<endl;

  return 0;
}
