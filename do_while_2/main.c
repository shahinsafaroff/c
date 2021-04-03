#include <stdio.h>

int main() {

    int count;
    char letsContinue;
    int biggestNumber = 0;

    do {
        printf("Please enter the number ...\n");
        scanf("%d", &count);

        if (count > biggestNumber) {
            biggestNumber = count;
            printf("New biggest number is %d\n", biggestNumber);
        } else {
            printf("The biggest number wasn't changed. The biggest number is still %d", biggestNumber);

    }
    printf("Would you like to continue to find the Biggest Number again  (YES/yes/Yes?  \n");
    scanf(" %c", &letsContinue);

    } while ( letsContinue == "YES" || letsContinue == "yes" || letsContinue == "YES");

    printf("The Programme accomplished successfully");

    return 0;
}
