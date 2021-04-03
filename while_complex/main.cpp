#include <iostream>
int number, countDigits, sumDigits, currentDigit, untouchedNumber;

int main() {
    std::cout << "Please enter a positive integer to count and to distinguish the count numbers sum of that number" << std::endl;
    std::cin>>number;
    sumDigits = 0;
    countDigits = 0;
    untouchedNumber = number;
    while(number > 0){
        currentDigit = number%10;
        countDigits++;
        sumDigits+=currentDigit;
        number /=10;
    }

    std::cout<<untouchedNumber<<" has "<<countDigits<<" Digits"<<std::endl;
    std::cout<<"And their summary is "<<sumDigits<<std::endl;

    return 0;
}
