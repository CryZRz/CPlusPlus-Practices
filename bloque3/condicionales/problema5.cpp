#include <iostream>

using namespace std; 

int main()
{
    char caracter;

    cout<<"Ingresa un caracter: ";
    cin>>caracter;

    if (caracter == toupper(caracter))
    {
        cout<<"El caracter esta en mayuscula";
    }else{
        cout<<"El caracter esta en minuscula";
    }
    


    return 0;
}
