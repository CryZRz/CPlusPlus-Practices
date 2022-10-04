#include <iostream>

using namespace std;

int main()
{
    
    int x, y, result = 1;

    cout<<"Ingrese el valor de x: ";
    cin>>x;

    cout<<"Ingrese el valor de y: ";
    cin>>y;

    for (int i = 0; i < y; i++)
    {
       result = result * x;
    }
    
    cout<<"el valor de x a la y es: "<<result<<endl;

    return 0;
}
