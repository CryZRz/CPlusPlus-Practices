#include <iostream>

using namespace std;

int main()
{
    float nota1, nota2, nota3, resultado = 0;

    cout<<"Ingrese la nota 1: ";
    cin>>nota1;

    cout<<"Ingrese la nota 2: ";
    cin>>nota2;

    cout<<"Ingrese la nota 3: ";
    cin>>nota3;

    resultado = (nota1 * .30) + (nota2 * .60) + (nota3 * .10);

    cout<<"El promedio final es: "<<resultado<<endl;

    return 0;
}
