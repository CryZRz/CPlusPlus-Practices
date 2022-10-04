#include <iostream>

using namespace std;

int main()
{

    int x, y, aux;

    cout<<"Ingrese el valor de x: ";
    cin>>x;

    cout<<"Ingrese el valor de y: ";
    cin>>y;

    aux = x;
    x = y;
    y = aux;

    cout<<"el valor de x es: "<<x;
    cout<<"el valor de y es: "<<y;

    return 0;
}
