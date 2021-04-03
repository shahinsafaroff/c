#include <stdio.h>



int main() {
    int count;
    int sum = 0;
    int counter = 0;

    do {
        printf("Please enter values to find average value. For accomplishing press ZERO.\n");
        scanf("%d", &count);
        if (count !=0){
            counter++;
        }
        sum += count;
    } while (count!=0);
    if (counter==0) {
        counter++;
    }

    printf("entered counts summary: %d\n", sum);
    printf("Entered numbers average value: %.2f\n", (float)sum/counter);

    return 0;
}
