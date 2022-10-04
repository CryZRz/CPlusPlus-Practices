#include <iostream>

using namespace std;

void funpot(int n, int p);

int main() {
  int n, p;

  cout<<"ingrese el numero a elevar:";
  cin>>n;

  cout<<"ingrse la potencia:";
  cin>>p;

  funpot(n, p);

  return 0;
}

void funpot(int n, int p){
  long result = 0;

  for (int i = 0; i < p; i++) {
    result = n * n;
  }

  cout<<result;
}
