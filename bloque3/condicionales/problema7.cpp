#include <iostream>

using namespace std; 

int main()
{
    int edad;

    cout<<"Ingresa su edad: ";
    cin>>edad;

    if (edad >= 18 && edad <= 25)
    {
        cout<<"La edad esta en un rango de 18 a 25 años";
    }else{
        cout<<"La edad no esta en un rango de 18 a 25 años";
    }
    
    return 0;
}
