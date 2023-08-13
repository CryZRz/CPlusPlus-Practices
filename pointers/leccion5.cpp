#include <iostream>

using namespace std;

int main(){
    int size;
    cout<<"insert a size for dynamic array"<<endl;
    cin>>size;
    //reservamos memoria para un array de longitud n
    int *myArray = new int[size];

    for(int i = 0; i < size; i++){
        cout<<"insert a number";
        cin>>myArray[i];
    }

    for(int i = 0; i < size; i++){
        cout<<*(myArray + i)<<endl;
    }

    delete[] myArray;
    myArray = nullptr;

    return 0;
}