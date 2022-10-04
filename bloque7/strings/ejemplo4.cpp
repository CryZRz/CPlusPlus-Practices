#include <iostream>
#include <cstring>
#include <string>

using namespace std;


int main() {

  char nombre[] = "chrisitian";
  char nombre2[20];

  strcpy(nombre2,nombre);

  cout<<nombre2<<endl;

  return 0;
}
