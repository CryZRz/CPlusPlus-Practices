#include<iostream>

using namespace std;

void eachImp(int numsArray[], int);
void getData();

int arrayIntial[100];
int longitude = 0;

int main() {

  getData();

  const int tam = longitude;

  eachImp(arrayIntial, tam);

  return 0;
}

void getData(){

  cout<<"ingrese el numero de elementos para la lista";
  cin>>longitude;

  for (int i = 0; i < longitude; i++) {
    cout<<"Ingrese le numero para la posicion"<<i+1<<endl;
    cin>>arrayIntial[i];
  }
}

void eachImp(int numsArray[], int longitude){
  for (int i = 0; i < longitude ; i++) {
    if (numsArray[i]%2 == 0) {
      cout<<numsArray[i]<<"es par"<<endl;
    }else{
      cout<<numsArray[i]<<"es impar"<<endl;
    }
  }
}
