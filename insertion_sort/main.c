#include <stdio.h>
#include <stdlib.h>
#define MAX 100

void insertionSort(int array[], int length){
    int element;
    int first;
    for (int i=1; i<length; ++i){
    element = array[i];
    first = i-1;

    while (first>=0 && array[first]>element){
        array[first+1] = array[first];
        first--;
    }
    array[first+1] = element;
    }
}

int main() {

    int allcountsArray[MAX], length;

    printf("Please enter Length of an Array\n");
    scanf("%d ", length);

    for(int i=0; i<length; ++i){
        printf("%d. Pleae enter an element of Array", i+1);
        scanf("%d", &allcountsArray[i]);
    }
    for (int i=0; i<length;++i){
        printf("%d ", allcountsArray[i]);
    }
    printf("\n");

    insertionSort(allcountsArray, length);

    for (int i=0; i<length;++i){
        printf("%d ", allcountsArray[i]);
    }
    return 0;
}
