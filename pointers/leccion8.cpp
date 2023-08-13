//SMART POINTERS
#include <iostream>
#include <memory>

using namespace std;

class MyClass {
public:
    MyClass() {
        cout << "Contruct invoked" << endl;
    }
    ~MyClass(){
        cout<<"Desctuctor invoked"<<endl;
    }
};

int main(){
    {
        unique_ptr<MyClass>ptrMyClass = make_unique<MyClass>();
    }

    //unique pointers
    /*
     * la memoria de los unique pointers se libera en el socpe
     * solo puede haber un pointer con la referencia de memoria
     */
    unique_ptr<int>unPtr1 = make_unique<int>(25);

    //shared pinters
    /*
     *La memoria de los shared pointers se liberara cuando ya no haya ningun shared pointer apunto hacia ella
     * y se liberara un shared pointer cuando salga del socppe
     */
    shared_ptr<MyClass>shPtr1 = make_shared<MyClass>();
    cout<<"Shared count "<<shPtr1.use_count()<<endl;
    shared_ptr<MyClass>shPtr2 = shPtr1;
    cout<<"Shared count "<<shPtr1.use_count()<<endl;


    return 0;
}
