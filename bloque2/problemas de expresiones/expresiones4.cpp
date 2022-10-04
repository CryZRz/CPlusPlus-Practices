#include <iostream>

using namespace std;

int main()
{
    float a, b, c, d, resultado=0;

    cout<< "Ingrese el numero para a: ";
    cin >> a;

    cout<< "Ingrese el numero para b: ";
    cin >> b;

    cout<< "Ingrese el numero para c: ";
    cin >> c;
    
    cout<< "Ingrese el numero para d: ";
    cin >> d;

    resultado = a + (b / (c - d));

    cout<<"el resultado es: "<<resultado<<endl;

    return 0;
}
