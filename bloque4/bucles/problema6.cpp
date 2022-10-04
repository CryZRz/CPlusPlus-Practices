#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    
    int n, suma = 0, x = 0;

    cout<<"Ingresa el valor de n";
    cin>>n;

    for (int i = 1; i <= n; i++)
    {
        x = pow(2, i);
        suma += x; 
        
    }
    
    cout<<"el valor de la suam es:"<<suma<<endl;

    return 0;
}