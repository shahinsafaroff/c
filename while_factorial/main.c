#include <stdio.h>
//FACTORIAL 5*4*3*2*1 = 120 ====> 5! = 120
int main() {
    int count, factorialSummary = 1;

    printf("Please enter a digit for finding its Factorial...\n");
    scanf("%d", &count);

    int usersEnteredCount = count;

    while (count >= 0) {
        if (count == 0) {
            factorialSummary *= 1;
        } else if (count > 0) {
            factorialSummary *= count;
        }
        count--;
    }

    while (count <0) {
        factorialSummary *= count;
        count ++;
    }

    printf("%d! = %d", usersEnteredCount, factorialSummary);

    return 0;
}
