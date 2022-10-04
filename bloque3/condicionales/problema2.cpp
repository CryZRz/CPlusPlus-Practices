#include <iostream>

using namespace std; 

int main()
{
    int n1, n2, n3;

    cout<<"digite dos numeros: ";
    cin>>n1>>n2>>n3;

    if(n1 > n2 && n1 > n3 ){
        cout<<"el numero mayor es"<<n1;
    }
    else if (n2 > n1 && n2 > n3)
    {
        cout<<"el numero mayor es"<<n2;
    }
    else if(n3 > n1 && n3 > n2){
        cout<<"el numero mayor es"<<n3;
    }else{
        cout<<"todos los numeros son iguales";
    }
    
    
    return 0;
}