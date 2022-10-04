#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float b, a, c, xPositiva = 0, xNegativa = 0;

    cout<<"Ingrese el valor de b: ";
    cin>>b;

    cout<<"Ingrese el valor de a: ";
    cin>>a;

    cout<<"Ingrese el valor de c: ";
    cin>>c;

    xPositiva = (-b + sqrt(pow(b,2)- (4*a*c))) / (2*a);

    xNegativa = (-b - sqrt(pow(b,2)- (4*a*c))) / (2*a);

    cout<<"el resultado es  x potiva: "<<xPositiva<<endl;

    cout<<"el resultado es  x negativa: "<<xNegativa<<endl;

    return 0;
}
