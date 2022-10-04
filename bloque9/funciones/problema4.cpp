#include <iostream>

using namespace std;

float funpot(float n);

int main() {
  float n;

  cout<<"ingrse un nuemro deciaml:";
  cin>>n;

  cout<<funpot(n);

  return 0;
}

float funpot(float n){
  int numInt = n;
  float result = n - numInt;

  return result;
}
