#include <iostream>
#include <cstring>

using namespace std;

int main(){

    char palabra1[20];
    char palabra2[20];


    cout<<"Ingrese una cadena de carecteres:";
    cin.getline(palabra1,20,'\n');

    cout<<"Ingrese una cadena de carecteres:";
    cin.getline(palabra2,20,'\n');

    if (strcmp(palabra1,palabra2)==0)
    {
        cout<<"las palabras son iguales"<<endl;
    }
    else if (strcmp(palabra1,palabra2)>0)
    {
        cout<<palabra1<<"es mayor que: "<<palabra2<<endl;
    }else{
          cout<<palabra2<<"es mayor que: "<<palabra1<<endl;
    }
    

    return 0;
}