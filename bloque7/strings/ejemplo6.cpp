#include <iostream>
#include <cstring>

using namespace std;

int main(){

    char cad1[] = "chris";
    char cad2[] = "dev";
    char cad3[20];

    strcpy(cad3,cad1);

    strcat(cad3,cad2);

    cout<<cad3<<endl;

    return 0;
}