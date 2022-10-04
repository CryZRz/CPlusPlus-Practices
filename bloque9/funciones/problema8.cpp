#include <iostream>

using namespace std;

void totalSeg(int num, int&, int&, int&);

int main() {

  int num, horas, min, seg;

  cout<<"ingrese un numero de segundos";
  cin>>num;

  totalSeg(num, horas, min, seg);

  cout<<"hours"<<horas<<endl;
  cout<<"minutes"<<min<<endl;
  cout<<"seconds"<<seg<<endl;

  return 0;
}

void totalSeg(int num, int& hours, int& minutes, int& seconds){
  hours = num / 3600;
  num %= 3600;
  minutes = num/60;
  seconds = num%60;
}
