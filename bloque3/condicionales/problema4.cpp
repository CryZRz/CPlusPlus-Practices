#include <iostream>

using namespace std; 

int main()
{
    int numero; 

    cout<<"ingrese un numero: ";
    cin>>numero;

    if (numero == 0)
    {
        cout<<"El numeor es 0";
    }
    else if(numero < 0){
        cout<<"el numero negativo";
    }else{
        cout<<"el numero es positivo";
    }
    


    return 0;
}