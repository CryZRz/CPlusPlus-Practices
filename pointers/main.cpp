#include <iostream>

int main() {
    int n = 5;
    std::cout<<&n<<std::endl;
    int *ptr = &n;
    std::cout<<ptr<<std::endl;
    std::cout<<*ptr<<std::endl;
    *ptr = 5;
    std::cout<<*ptr<<std::endl;

    int b;
    int* ptr2 = &b;
    *ptr = 7;
    std::cout<<"b= "<<b<<std::endl;


    return 0;
}
