//Estructuras basicas

#include<iostream>

using namespace std;

struct person{
  char name[20];
  int age;
}
persona1 = {"chris",18},
persona2 = {"jime",18};


int main() {

  cout<<"name1"<<persona1.name<<endl;
  cout<<"age1"<<persona1.age<<endl;

  cout<<"name2"<<persona2.name<<endl;
  cout<<"age2"<<persona2.age<<endl;

  return 0;
}
