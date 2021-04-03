#include <stdio.h>

int main() {

    int count = 0;
    int x=1;
    int summary = 0;

    printf("Please enter the number to calculate ... \n");
    scanf("%d", &count);

    int usersCount = count;

    while (count > 0) {

        printf("%d\n", x);
        summary = summary + x;
        x ++ ;
        count -- ;
    }
    printf("From 1 to %d all numbers summary is  %d\n", usersCount, summary);
    return 0;
}
