#include <iostream>

using namespace std;

struct infoDireccion{
  char direccion[20];
  char ciudad[20];
  char provincia[20];
};

struct empleado{
  char nombre[20];
  struct infoDireccion dir_empleado;
  double salario;
}empleados[2];

int main() {

  for (int i = 0; i < 2; i++) {
    cout<<"ingrese su nombre";
    cin.getline(empleados[i].nombre, 20, '\n');
    cin.ignore(1,'\n');
    cout<<"ingrese su direccion";
    cin.getline(empleados[i].dir_empleado.direccion, 30, '\n');
    cin.ignore(1,'\n');
    cout<<"ingrese su ciudad";
    cin.getline(empleados[i].dir_empleado.ciudad, 30, '\n');
    cin.ignore(1,'\n');
    cout<<"ingrese su provincia";
    cin.getline(empleados[i].dir_empleado.provincia, 30, '\n');
    cin.ignore(1,'\n');
    cout<<"ingrese su salario";
    cin>>empleados[i].salario;
    cin.ignore(1,'\n');
    cout<<'\n';

  }

  for (int i = 0; i < 2; i++) {
    cout<<empleados[i].nombre<<endl;
    cout<<empleados[i].dir_empleado.direccion<<endl;
    cout<<empleados[i].dir_empleado.ciudad<<endl;
    cout<<empleados[i].dir_empleado.provincia<<endl;
    cout<<empleados[i].salario<<endl;
    cout<<'\n';
  }

  return 0;
}
