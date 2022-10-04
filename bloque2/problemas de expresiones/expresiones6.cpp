#include <iostream>

using namespace std;

int main()
{
    float alumno1, alumno2, alumno3, promedio = 0;

    cout<<"Ingrese la nota del primer alumno: ";
    cin>>alumno1;

    cout<<"Ingrese la nota del segundo alumno: ";
    cin>>alumno2;

    cout<<"Ingrese la nota del tercer alumno: ";
    cin>>alumno3;

    promedio = (alumno1 + alumno2 + alumno3) / 3;

    cout<<"El promedio de las notas es: "<<promedio;

    return 0;
}
