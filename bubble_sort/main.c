#include <stdio.h>
#include <stdlib.h>
#define MAX 100

void bubbleSort(int array[], int length){
    for (int i=0; i<length; ++i) {
        for (int j=1;j<length-i; ++j){
            if (array[j-1]>array[j]){
                int temp = array[j];
                array[j] = array[j-1];
                array[j-1] = temp;
            }
        }
    }
}

int main() {

    int allcountsArray[MAX], length;

    printf("Please enter Length of an Array\n");
    scanf("%d", length);

    for(int i=0; i<length; ++i){
        printf("%d. Pleae enter an element of Array", i+1);
        scanf("%d", &allcountsArray[i]);
    }
    for (int i=0; i<length;++i){
        printf("%d ", allcountsArray[i]);
    }
    printf("\n");

    bubbleSort(allcountsArray, length);

    for (int i=0; i<length;++i){
        printf("%d ", allcountsArray[i]);
    }
    return 0;
}
