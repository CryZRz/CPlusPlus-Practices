#include <iostream>
#include <cstring>

using namespace std;

int main(){

    string cadena;
    string cadena2;

    cout<<"Ingrese un palabra";
    getline(cin,cadena);

    for (int i = cadena.length(); i > 0; i--)
    {
        cadena2[i] = cadena[i];
    }   

   cout<<cadena2;

    return 0;
}