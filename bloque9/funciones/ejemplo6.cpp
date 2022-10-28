//pasar estructuras en funciones

#include<iostream>

using namespace std;

struct Persona{
  char name[20];
  int age;
}person1;

//prototype
void getDates();
void showDates(Persona);

int main() {

  getDates();
  showDates(person1);

  return 0;
}

void getDates(){
  cout<<"Ingresa tu nombre";
  cin.getline(person1.name, 20, '\n');
  cout<<"Ingresa tu edad";
  cin>>person1.age;
}

void showDates(Persona per){
  cout<<"nombre"<<per.name<<endl;
  cout<<"nombre"<<per.age<<endl;
}
