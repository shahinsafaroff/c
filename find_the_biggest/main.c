#include <stdio.h>

int main() {

    int count;
    int biggestCount;

    printf("Please enter 10 count...\n");
    for(int i=0; i<10; ++i){
        scanf("%d", &count);
        if(i==0){
            biggestCount = count;
        }
        if (biggestCount < count){
            biggestCount = count;
        }
    }
    printf("The biggest count value within numbers: %d", biggestCount);

    return 0;
}
