#include <iostream>

using namespace std;

void printNUmber(int* numberPtr){
    cout<<*numberPtr<<endl;
}

//los void pointers pueden almacenar posiciones de memeoria de objetos de tipo any o sea de cualquer tipo
void print(void* ptr, char type){
    /*
     * verificamos el tipo de puntero de typo any que se paso con el segundo
     * parametro y se hace un cast a ese tipo
     */
    switch (type) {
        case 'i':
            cout<<*((int*)ptr)<<endl;
            break;
        case 'c':
            cout<<*((char*)ptr)<<endl;
            break;
    }
}

int main(){
    int number = 5;
    char letter = 'j';
    //printNUmber(&number);
    print(&number, 'i');
    print(&letter, 'c');
    return 0;
}