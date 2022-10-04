#include <iostream>

using namespace std;

int main()
{
    int n1, n2;

    cout<<"digite dos numeros: ";
    cin>>n1>>n2;

    if(n1 == n2){
        cout<<"Ambos numeros son iguales";
    }
    else if (n1 > n2)
    {
        cout<<"el numero mayor es"<<n1;
    }else{
        cout<<"el numero mayor es"<<n2;
    }
    


    
    return 0;
}
