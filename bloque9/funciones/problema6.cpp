#include <iostream>

using namespace std;

int maximo(int n, int x, int z);

int main() {

  int num1, num2, num3;

  cout<<"ingrse un numero:";
  cin>>num1;
  cout<<"ingrse un numero:";
  cin>>num2;
  cout<<"ingrse un numero:";
  cin>>num3;

  cout<<maximo(num1,num2,num3);


  return 0;
}


int maximo(int n, int x, int z){
  int max = 0;
  if (n > x && n > z) {
    max = n;
  }
  else if (x > n && x > z) {
    max = x;
  }else{
    max = z;
  }

  return max;
}
