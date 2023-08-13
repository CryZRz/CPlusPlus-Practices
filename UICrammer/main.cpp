#include <iostream>
#include <boost/math/tools/polynomial.hpp>

using Polynomial = boost::math::tools::polynomial<double>;

int main(int argc, char* argv[]){

    Polynomial polinomio1 = {1, 2, 3};
    Polynomial polinomio2 = {5, 4};

    auto result =  polinomio1 * polinomio2;

    std::cout<<"resultado";
    for (int i = 0; i < result.size(); i++)
    {
        std::cout << result[i] << "x^" << i << " ";
    }
    
    return 0;
}