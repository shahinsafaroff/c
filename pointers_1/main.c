#include <stdio.h>
#include <stdlib.h>


int main() {
    int count;
    printf("Please enter a count...\n");
    scanf("%d", &count);

    int *countAddress;

    countAddress = &count;

    printf("%d %x\n %p", *countAddress, countAddress, countAddress);
    return 0;
}
