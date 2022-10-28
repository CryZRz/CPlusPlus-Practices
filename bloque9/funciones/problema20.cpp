#include <iostream>

using namespace std;

int serieNumeros(int, int);

int main() {

  int ini,  fin;

  cout<<"Ingrese el inicio:";
  cin>>ini;
  cout<<"Ingrese el final";
  cin>>fin;

  for (int i = ini; i <= fin; i++) {
    cout<<serieNumeros(i, fin);
  }

  return 0;
}

int serieNumeros(int start, int end){
  if (start == end) {
    return start;
  } else {
    return serieNumeros(start, end-1);
  }
}
