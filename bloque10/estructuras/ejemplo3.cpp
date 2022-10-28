#include <iostream>
#include <string.h>

using namespace std;

struct corredor{
  char nombre[20];
  int edad;
  char sexo[10];
  char club [30];
}corredorExp;

int main() {

  char categoria[30];

  cout<<"Ingrese su nombre";
  cin.getline(corredorExp.nombre, 20, '\n');
  cout<<"Ingrese su edad";
  cin>>corredorExp.edad;
  cin.ignore(1000, '\n');
  cout<<"Ingrese su sexo";
  cin.getline(corredorExp.sexo, 10, '\n');
  cout<<"Ingrese su club";
  cin.getline(corredorExp.club, 30, '\n');

  if (corredorExp.edad <= 18) {
    strcpy(categoria, "juvenil");
  }
  else if (corredorExp.edad <= 40){
    strcpy(categoria, "senior");
  }else{
    strcpy(categoria, "veterano");
  }

  cout<<"nonbre"<<corredorExp.nombre<<endl;
  cout<<"edad"<<corredorExp.edad<<endl;
  cout<<"sexo"<<corredorExp.sexo<<endl;
  cout<<"club"<<corredorExp.club<<endl;
  cout<<"categoria"<<categoria<<endl;


  return 0;
}
