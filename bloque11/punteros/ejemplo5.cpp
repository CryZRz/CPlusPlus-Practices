//Asignacion dinamica de arreglos

//new: Reserva el numero de bytes solicitados por la declaracion;
//delete: libera un bloque de bytes reservados con enterioridad;

#include <iostream>
#include <stdlib.h>//funciones new y delete

using namespace std;

int numCalificacion, *calificacion;

void pedirNotas(){
  cout<<"Digita el numero de calificaciones";
  cin>>numCalificacion;

  calificacion = new int[numCalificacion];//crear arreglo

  for (int i = 0; i < numCalificacion; i++) {
    cout<<"Ingresa un nota"<<endl;
    cin>>calificacion[i];
  }

}

void mostartNotas(){

  for (int i = 0; i < numCalificacion; i++) {
      cout<<calificacion[i]<<endl;
  }

}

int main() {

  pedirNotas();
  mostartNotas();

  delete[] calificacion;//liberacion el espacio en bytes utitlizado anteriormente

  return 0;
}
