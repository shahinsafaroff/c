#include <stdio.h>

int main() {

    int i = 10;

    while (i<10) {
        printf("While!%d\n", i);
        i++;
    }
    printf("\n");


    int a = 10;
    do{
        printf("Do-While %d\n", a);
        a++;
    } while (a<16);

    return 0;
}
