#include <stdio.h>

void printStars(int *item) {
    for (int i=0; i<*item;++i){
        printf("*");
    }
}


int main() {
    int count;
    printf("How many stars would you like to print?\n");
    scanf("%d", &count);

    printStars(&count);

    return 0;
}
