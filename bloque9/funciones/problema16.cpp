#include <iostream>

using namespace std;

struct Date{
  int day;
  int month;
  int year;
}date1, date2;

void getaDtes();
Date eachDate(Date, Date);
void showDate(Date);

int main() {

  getaDtes();
  Date resultDate = eachDate(date1, date2);
  showDate(resultDate);


  return 0;
}

void getaDtes(){
  cout<<"dia pirmer fecha";
  cin>>date1.day;
  cout<<"mes pirmer fecha";
  cin>>date1.month;
  cout<<"año pirmer fecha";
  cin>>date1.year;

  cout<<"dia segunda fecha";
  cin>>date2.day;
  cout<<"mes segunda fecha";
  cin>>date2.month;
  cout<<"año segunda fecha";
  cin>>date2.year;
}

Date eachDate(Date d1, Date d2){
  Date result;
  if (d1.day > d2.day && d1.month > d2.month && d1.year > d2.year) {
    result = d1;
  }else{
    result = d2;
  }

  return result;
}

void showDate(Date dateShow){
  cout<<"la fehca mayor es:"<<endl;
  cout<<dateShow.day<<"/"<<dateShow.month<<"/"<<dateShow.year;
}
