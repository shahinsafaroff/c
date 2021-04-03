#include <iostream>

int factorial(int number);

int main() {
    int n, k, k_kombinations;
    int nFactorial, kFactorial, n_kFactorial;
    std::cout <<"Please enter n and k" << std::endl;
    std::cin>>n>>k;

    nFactorial = factorial(n);
    kFactorial = factorial(k);

    n_kFactorial = factorial(n-k);

    k_kombinations = nFactorial/(kFactorial*n_kFactorial);

    std::cout<<n<<" choose "<<k<< " is "<<std::endl;
    std::cout<<k_kombinations<<std::endl;
    return 0;
}

int factorial(int number) {
    int factorialResult, i;
    factorialResult = 1;

    for (i=1; i<=number; ++i)
        factorialResult *= i;
        return factorialResult;

}
