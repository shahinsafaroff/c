#include <stdio.h>
//RECURSIVE FUNCTIONS --- SelfRepeating Inside functions --Refreshing Functions

int recursiveSum(int count) {

    if(count != 0) {
        return count + recursiveSum(count-1);
    } else {
        return count;
    }
}

int main() {
    int count;
    printf("Please enter Positive Integer number. \n");
    scanf("%d", &count);

    if(count > 0) {
        printf("%d", recursiveSum(count));
    } else {
        printf("Please enter Positive Integer number. \n");
    }
    return 0;
}
