#include <iostream>

using namespace std;

int serieFic(int);

int main() {

  int nElements;

  cout<<"Ingresa el numero de elementos";
  cin>>nElements;

  for (int i = 0; i < nElements; i++) {
    cout<<serieFic(i)<<",";
  }

  return 0;
}

int serieFic(int n){
  if (n < 2) {
    return n;
  } else {
    return serieFic(n-1) + serieFic(n-2);
  }
}
