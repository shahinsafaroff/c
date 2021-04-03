#include <iostream>
//VOID Functions won't return any calculated value to another function
int factorial(int number);
int Combinations(int n, int k);


int main() {
    int n, k, k_Combinations;
    int nFactorial, kFactorial, n_kFactorial;
    std::cout <<"Please enter n and k" << std::endl;
    std::cin>>n>>k;

    k_Combinations = Combinations(n,k);

    std::cout<<n<<" choose "<<k<< " is "<<std::endl;
    std::cout<<k_Combinations<<std::endl;
    return 0;
}

int Combinations(int n, int k) {
    int nFact, kFact, n_kFact;

    nFact = factorial(n);
    kFact = factorial(k);
    n_kFact = factorial(n-k);

    return (nFact / (kFact*n_kFact));
}

int factorial(int number) {
    int factorialResult, i;
    factorialResult = 1;

    for (i=1; i<=number; ++i)
        factorialResult *= i;
    return factorialResult;

}