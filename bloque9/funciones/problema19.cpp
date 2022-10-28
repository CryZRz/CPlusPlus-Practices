#include<iostream>

using namespace std;

int elevarPotencia(int, int);

int main() {

    cout<<elevarPotencia(3, 2);

  return 0;
}

int elevarPotencia(int n , int x){
  if (x == 0) {
      return n = 1;
  } else {
    return n = n * elevarPotencia(n, x-1);
  }
}
