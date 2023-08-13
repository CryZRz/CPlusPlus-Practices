#include <iostream>

using namespace std;

int getNumber(){
    return 5;
}

int add(int a, int b){
    return  a + b;
}

void compareMax(int num, int& comp){
    if (num > comp){
        comp = num;
    }
}

int findMax(int nums[], int size,  void(*callback)(int, int&)){
    int max = nums[0];
    for (int i =0; i< size; i++){
        callback(nums[i], max);
    }

    return max;
}

int main(){

    //puntero a funciones
    /*
     * primero se pone el valor de retorno de la funcion
     * seugndo el nombre del puntero que va aguardar la direccion de la funcion
     * terceto los parametros que recive la funcion
     */
    //int(*funcPtr)() = getNumber;
    //cout<<funcPtr()<<endl;

    //int(*funcPtrAdd)(int, int) = add;
    //cout<<funcPtrAdd(2, 10)<<endl;
    //cout<<funcPtrAdd(3, 4)<<endl;

    int arrNums[] = {1, -2, 10, 25, 50};
    void(*compare)(int, int&) = compareMax;
    cout<<findMax(arrNums, 5, compare)<<endl;

    int(*lamdafunc)(int, int) = [](int a, int b){
        return a + b;
    };
    std::cout<<lamdafunc(10, 20);

    return 0;
}
