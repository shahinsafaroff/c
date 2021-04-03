#include <stdio.h>

void biggestNumber(int array[], int length) {
    int biggestNumber = 0;

    for(int i = 0; i < length; ++i){
        if(array[i] > biggestNumber) {
            biggestNumber = array[i];
        }
    }
    printf("The biggest Number is %d", biggestNumber);
}

int main() {

    int array[] = {2,3,4,5,6,7};

    biggestNumber(array, 6);

    return 0;
}
