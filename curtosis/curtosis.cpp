#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {

  int numberRows = 0;

  float sumX = 0;
  float xTested = 0;

  float x_xTested = 0;
  float x_xTestedSquared = 0;
  float x_xTestedQuarter = 0;

  float sumx_xSquared = 0;
  float sumx_xQuarter = 0;

  float variance = 0;
  float deviation = 0;
  float deviationQuarter = 0;
  float g2 = 0;

  cout<<"Ingrese el numero de filas: ";
  cin>>numberRows;

  float listNumberX[numberRows];
  float matrizTable[numberRows][4];

  for (int i = 0; i < numberRows; i++) {
      cout<<"Ingres el numero para la fila x en la posicion"<<i+1<<endl;
      cin>>listNumberX[i];
  }

  for (int i = 0; i < numberRows; i++) {
      sumX += listNumberX[i];
  }

  cout<<"suma de x"<<sumX<<endl;

  xTested = sumX / numberRows;

  cout<<xTested;

  for (int i = 0; i < numberRows; i++) {
    matrizTable[i][0] = listNumberX[i];

      for (int j = 1; j < 4; j++) {
          if (j == 1) {
            x_xTested = listNumberX[i] - xTested;
            matrizTable[i][j] = x_xTested;
          }
          else if (j == 2) {
            x_xTestedSquared = pow(x_xTested, 2);
            sumx_xSquared += x_xTestedSquared;
            matrizTable[i][j] = x_xTestedSquared;
          }
          else if (j == 3) {
            x_xTestedQuarter = pow(x_xTestedSquared, 2);
            sumx_xQuarter += x_xTestedQuarter;
            matrizTable[i][j] = x_xTestedQuarter;
          }
      }

  }

  variance = sumx_xSquared / numberRows;
  deviation = sqrt(variance);
  deviationQuarter = pow(deviation,4);
  g2 = sumx_xQuarter / (numberRows * deviationQuarter);

  for (int i = 0; i < numberRows; i++) {

    for (int j = 0; j < 4; j++) {
      printf("%.2f; ",matrizTable[i][j]);
    }
    cout<<"\n";
  }

  cout<<"Varianza: "<<variance<<endl;
  cout<<"Desviasion: "<<deviation<<endl;
  cout<<"DesviasionCuarta: "<<deviationQuarter<<endl;
  cout<<"g2: "<<g2<<endl;

  return 0;
}
