#include <iostream>

using namespace std;

int main()
{

    float a, b, c, d, e, f, resultado=0;
    
    cout<< "Ingrese el numero para a: ";
    cin >> a;

    cout<< "Ingrese el numero para b: ";
    cin >> b;

    cout<< "Ingrese el numero para c: ";
    cin >> c;
    
    cout<< "Ingrese el numero para d: ";
    cin >> d;
    
    cout<< "Ingrese el numero para e: ";
    cin >> e;

    cout<< "Ingrese el numero para f: ";
    cin >> f;

    resultado = (a + (b/c)) / (d + (e/f));

    cout<<"el resultado es: "<<resultado<<endl;

    return 0;
}
