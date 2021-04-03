#include <stdio.h>
#include <stdlib.h>
#define MAX 100

void selectionSort(int array[], int length){
    int theLessIndex;
    for (int i=0; i<length; ++i){
        theLessIndex = i;
        for (int j=i; j<length; ++j ){
            if(array[j] < array[theLessIndex]){
                theLessIndex = j;
            }
        }
        int temp = array[i];
        array[i] = array[theLessIndex];
        array[theLessIndex] = temp;
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

    selectionSort(allcountsArray, length);

    for (int i=0; i<length;++i){
        printf("%d ", allcountsArray[i]);
    }
    return 0;
}
