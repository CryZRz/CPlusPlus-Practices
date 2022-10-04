#include <iostream>

using namespace std;

void totalSeg(int, int&, int&, int&);

int main() {

  int num, years, months, days;

  cout<<"ingrese un numero de dias";
  cin>>num;

  totalSeg(num, years, months, days);

  cout<<"fecha actual"<<days+1<<"/"<<months+1<<"/"<<years+2000<<endl;

  return 0;
}

void totalSeg(int num, int& years, int& months, int& days){
  years = num / 360;
  num %= 360;
  months = num/30;
  days = num%30;
}
