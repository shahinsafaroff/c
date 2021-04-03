#include <iostream>

int analyzeDigits(int sum, int& outSum);

int main() {
    int num, countDigits, sumDigits;
    std::cout << "Please enter positive integer: " << std::endl;
    std::cin >> num;
    countDigits = analyzeDigits(num, sumDigits);
    std::cout<<num<<" has "<<countDigits<<" Digits and their sum is "<<sumDigits<<std::endl;
    return 0;
}

int analyzeDigits(int num, int &outSum){
    int count, sum, currentDigit;
    count  = 0;
    sum = 0;
    while(num > 0){
        currentDigit = num % 10;
        count++;
        sum +=currentDigit;
        num = num/10;
    }
    outSum = sum;
    return count;

}
