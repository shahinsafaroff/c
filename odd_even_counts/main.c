#include <stdio.h>

int main() {

    int oddCountQuantity = 0;
    int evenCountQuantity = 0;
    int negativeCountQuantty = 0;
    int count;

    printf("Please enter 10 pozitive count...\n");
    for(int i=0; i<10; ++i){
        scanf("%d", &count);
        if(i>0){
                        if (count % 2 == 0){
                            evenCountQuantity++;
                        }else {
                            oddCountQuantity++;
                        }
        } else{
            negativeCountQuantty++;
        }
    }
    printf("The odd count quantity within numbers: %d\n", oddCountQuantity);
    printf("The even count quantity within numbers: %d\n", evenCountQuantity);
    printf("The negative number quantity within numbers: %d\n", negativeCountQuantty);

    return 0;
}
