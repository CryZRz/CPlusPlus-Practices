#include <iostream>

using namespace std;

int suma(int);

int main() {

  int x;

  cout<<"Ingrese un numero:";
  cin>>x;

  cout<<suma(x)<<endl;

  return 0;
}

int suma(int n){
  if (n == 1) {
    n = 1;
  } else {
    n = n + suma(n-1);
  }

  return n;
}
