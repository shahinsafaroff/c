#include <stdio.h>

int main() {
    int count1, count2, summary = 0;

    printf("From which number to which number we should start to Summ, please enter 2 digits for interval ..\n");
    scanf("%d%d", &count1, &count2);

    int termCount = abs(count1-count2) + 1;
    int bigger, lesser;

    if (count2 > count1) {
        bigger = count2;
        lesser = count1;
        while (termCount > 0) {
            printf("%d\n", count1);
            summary += count1;
            count1 ++;
            termCount --;
        }
    }
    else if (count2 <= count1){
        bigger = count1;
        lesser = count2;
        while (termCount > 0){
            printf("%d\n", count2);
            summary+=count2;
            count2 ++;
            termCount --;
        }
    }
    printf("From %d until %d all numbers count = %d", lesser, bigger, summary);
    return 0;
}
