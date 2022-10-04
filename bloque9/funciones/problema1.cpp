#include <iostream>

using namespace std;

float mult(float x, float y);

int main() {

  cout<<mult(5.5,5.2);

  return 0;
}

float mult(float x, float y){
  return x*y;
}
