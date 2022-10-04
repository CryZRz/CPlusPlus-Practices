#include <iostream>

using namespace std;

int main()
{
    
    int numeros[100], n, mayor = 0;

    cout<<"Ingrese el numero de elementos de array: ";
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        cout<<i+1<<"Ingrese el numero: ";
        cin>>numeros[i];

        if (numeros[i] > mayor)
        {
            mayor = numeros[i];
        }
        
    }

    cout<<"El mayor elemento del arreglo es: "<<mayor<<endl;
    

    return 0;
}
