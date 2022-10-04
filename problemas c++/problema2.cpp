#include <iostream>

using namespace std;

int main() {

  float price;
  float priceIva;
  float priceMoreIva;

  cout<<"Ingrese el precio del producto";
  cin >> price;

  priceIva = price * .16;
  priceMoreIva = price + priceIva;

  cout<<"El precio del producto mas IVA es: "<<priceMoreIva;

  return 0;
}
