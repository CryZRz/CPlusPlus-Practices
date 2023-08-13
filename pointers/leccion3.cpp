#include <iostream>

using namespace std;

int main(){

    int luckyNumbers[5]; //= {2, 3, 5, 7, 9}
    //cout<<luckyNumbers<<endl;
    //cout<<&luckyNumbers[0]<<endl;
    //cout<<*(luckyNumbers + 2)<<endl;//aumenta en bites la posicion y la muestra

    for(int i=0; i<5; i++){
        cout<<"Inser a number"<<endl;
        cin>>luckyNumbers[i];
    }

    for(int i=0; i<5; i++){
        cout<<*(luckyNumbers+i)<<endl;
    }

    return 0;
}