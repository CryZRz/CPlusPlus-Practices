#include <iostream>

using namespace std;

int main()
{
    
    int n, suma = 0, factorial = 1;

    cout<<"Ingresa el valor de n";
    cin>>n;

    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
        suma += factorial;
        
    }
    
    cout<<"el valor de la suam es:"<<suma<<endl;

    return 0;
}