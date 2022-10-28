#include<iostream>

using namespace std;


struct corredor{
  char nombre[20];
  int edad;
  int promedio;
}alumnos[3];

int main() {

  for (int i = 0; i < 3; i++) {

    cout<<"Ingrese el nombre del alumno: ";
    cin.getline(alumnos[i].nombre, 20, '\n');
    cin.ignore(1000, '\n');
    cout<<"Ingrese la edad del alumno: ";
    cin>>alumnos[i].edad;
    cin.ignore(1000, '\n');
    cout<<"Ingrese el promedio del alimno: ";
    cin>>alumnos[i].promedio;
    cin.ignore(1000, '\n');
  }

  if (alumnos[0].promedio > alumnos[1].promedio && alumnos[0].promedio > alumnos[2].promedio) {
    cout<<"el alumno con mas promedio es:"<<endl;
    cout<<"nombre: "<<alumnos[0].nombre<<endl;
    cout<<"edad: "<<alumnos[0].edad<<endl;
    cout<<"promedio: "<<alumnos[0].promedio<<endl;
  }
  else if (alumnos[1].promedio > alumnos[0].promedio && alumnos[1].promedio > alumnos[2].promedio) {
    cout<<"el alumno con mas promedio es: "<<endl;
    cout<<"nombre: "<<alumnos[1].nombre<<endl;
    cout<<"edad: "<<alumnos[1].edad<<endl;
    cout<<"promedio: "<<alumnos[1].promedio<<endl;
  }else{
    cout<<"el alumno con mas promedio es: "<<endl;
    cout<<"nombre: "<<alumnos[2].nombre<<endl;
    cout<<"edad: "<<alumnos[2].edad<<endl;
    cout<<"promedio: "<<alumnos[2].promedio<<endl;
  }

  return 0;
}
