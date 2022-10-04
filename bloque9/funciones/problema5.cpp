#include <iostream>

using namespace std;

template <class tipe>
void despliegue(tipe data);

int main() {

  string name = "chirs";
  int num = 54;
  float numFloat = 25.63;
  char character = 'j';

  despliegue(name);
  despliegue(num);
  despliegue(numFloat);
  despliegue(character);

  return 0;
}

template <class tipe>
void despliegue(tipe data){
  cout<<data<<endl;
}
