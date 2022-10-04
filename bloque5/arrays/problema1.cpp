#include <iostream>

using namespace std;

int main()
{

    int numeros[] = {1,2,3,4,5};
    int suma = 0;

    for (int i = 0; i < numeros.size(); i++)
    {
        suma += numeros[i];
    }

    cout<<"la suma del arreglo es:"<<suma<<endl;
    


    return 0;
}
