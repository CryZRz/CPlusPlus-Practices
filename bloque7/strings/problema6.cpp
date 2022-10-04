#include <iostream>
#include <cstring>

using namespace std;

int main(){

    char cad1[] = "hola que tal ";
    char cad2[20];


    cout<<"ingrse su nombre: "<<endl;
    cin.getline(cad2,20,'\n');

    strcat(cad1,cad2);

    cout<<cad1<<endl;

    return 0;
}