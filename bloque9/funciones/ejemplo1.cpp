#include<iostream>

using namespace std;

int econtrarMax(int x, int y);

int main() {
  int n1, n2;

  cout<<"digite dos numeros: ";
  cin>>n1>>n2;

  cout<<econtrarMax(n1,n2);

  return 0;
}

int econtrarMax(int x, int y){
  int nuMax;

  if (x > y) {
    nuMax = x;
  }else{
    nuMax = y;
  }

  return nuMax;
}
