#include <iostream>

using namespace std;

int main(){
    int rows, cols;
    cout<<"rows, cols"<<endl;
    cin>>rows>>cols;

    int** table = new int* [rows];

    for(int i = 0; i<rows; i++){
        table[i] = new int[cols];
    }

    table[1][2] = 88;

    for(int i = 0; i<rows; i++){
        delete[] table[i];
    }
    delete[] table;
    table = nullptr;

    return 0;
}
