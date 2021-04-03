#include <stdio.h>

int evenOrOddControl(int count) {
    if(count%2 ==0){
        return 0;
    }
    else {
        return 1;
    }
}

int main() {

    int count;
    printf("Please enter the count to know if it is Even or Odd...?\n");
    scanf_s("%d", &count);

    if (evenOrOddControl(count)==1) {
        printf("Count is Odd");
    }
    else {
        printf("Count is Even");
    }
    return 0;
}
