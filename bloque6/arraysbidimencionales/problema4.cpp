#include <iostream>
#include <cstdlib>
#include <ctime>
#include <random>

using namespace std;

std::random_device rd;
std::mt19937 gen(rd());

int random(int low, int high)
{
    std::uniform_int_distribution<> dist(low, high);
    return dist(gen);
}

int main() {

  int matrizPrincipal[100][100], numeroFilas, numeroColumnas;
  int matrizSecundaria[100][100];
  int a;

  cout<<"Ingrese el numero de filas";
  cin >> numeroFilas;

  cout<<"Ingrese el numero de columnas";
  cin >> numeroColumnas;


  for (int i = 0; i < numeroFilas; i++) {

    for (int j = 0; j < numeroColumnas; j++) {
        a = random(1,100);
        matrizPrincipal[i][j] = a;
    }

  }

  for (int i = 0; i < numeroFilas; i++) {

    for (int j = 0; j < numeroColumnas; j++) {
        matrizPrincipal[i][j] = matrizSecundaria[i][j];
    }

  }


  for (int i = 0; i < numeroFilas; i++) {

    for (int j = 0; j < numeroColumnas; j++) {
        cout<<matrizSecundaria[i][j];
    }
    cout<<'\n';
  }

  return 0;
}
