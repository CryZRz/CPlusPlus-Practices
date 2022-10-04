#include <iostream>

using namespace std;

int main()
{

    int numeros[] = {1, 4, 3, 1, 2};
    int result = 0;
    int sumaTotal = 0;


    for (int i = 0; i < 5; i++)
    {
         int sumaDynamica = 0;

         for (int j = 0; j < 5; j++)
         {
            sumaDynamica += numeros[j];
            sumaTotal = sumaDynamica;
            cout<<sumaTotal<<endl;
         }

         cout<<sumaTotal<<endl;

         if (numeros[i] == sumaTotal-numeros[i])
         {
            result = numeros[i];
         }


    }

    if (result == 0) {
      cout<<"No hay ningun numero que sumado el array se igual a el"<<endl;
    }else{
      cout<<"numeros igual a la suma de los demas: "<<result<<endl;
    }


    return 0;
}
