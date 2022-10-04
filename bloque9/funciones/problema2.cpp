#include <iostream>

using namespace std;

template <class tip>
void alCuadrado(tip num);

int main() {

  alCuadrado(5);

  return 0;
}

template <class tip>
void alCuadrado(tip num){
  cout<<num * num;
}
