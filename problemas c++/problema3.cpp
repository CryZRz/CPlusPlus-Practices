#include <iostream>

using namespace std;

int main() {

  int edad;
  char sexo[10];
  float altura;

  cout << "Ingrese su edad: ";
  cin >> edad;

  cout << "Ingrese su sexo: ";
  cin >> sexo;

  cout << "Ingrese su altura: ";
  cin >> altura;

  cout << "Tu edad es: "<<edad<<"años" <<endl;
  cout << "Tu sexo es: "<<sexo <<endl;
  cout << "Tu altura es: "<<altura<<"metros" <<endl;


  return 0;
}
