#include <iostream>

using namespace std;

int main() {

  char array1[] = {'a', 'b', 'c', 'd', 'e'};
  char array2[] = {'f', 'g', 'h', 'i', 'j'};
  char array3[10];

  for (int i = 0; i < 10; i++) {
      if (i == 5) {
        array3[i] = array1[i];
      }else{
          array3[i] = array1[i];
      }
  }


  cout<<array3<<endl;


  return 0;
}
