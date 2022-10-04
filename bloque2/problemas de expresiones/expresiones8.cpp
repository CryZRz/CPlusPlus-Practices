#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    
    float catetoOpuesto, catetoAdyacente, hipotenusa = 0;

    cout<<"Ingrese el valor del cateto opuesto: ";
    cin>>catetoOpuesto;

    cout<<"Ingrese el valor del cateto adyacente: ";
    cin>>catetoAdyacente;

    catetoOpuesto = pow(catetoOpuesto,2);

    catetoAdyacente = pow(catetoAdyacente,2);

    hipotenusa = sqrt(catetoOpuesto + catetoAdyacente);

    cout<<"el valor de la hipotenusa es: "<<hipotenusa<<endl;

    return 0;
}
