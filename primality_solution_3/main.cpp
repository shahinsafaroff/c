#include <iostream>
#include <math.h>

bool isPrime(int num);

int main() {
    int num;
    std::cout << "Please enter the number for Primality testing" << std::endl;
    std::cin>>num;
    bool isPrime(int num);
    return 0;
}
bool isPrime(int num) {
    int countDivs;
    countDivs = 0;
    for(int i=1; i<= sqrt (num); i++) {
        if(num % i == 0)
            countDivs++;
    }
    if (countDivs == 1) {
        return true;
    }
    else{
        return false;
    }

}