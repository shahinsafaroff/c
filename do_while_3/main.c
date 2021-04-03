#include <stdio.h>

int main() {

    int number;
    int printDigit = 0;
    int numberValueSummary = 0;
    int untouchedNumber;
    char letsContinue = "YES";

        while ( letsContinue == "YES" || letsContinue == "yes" || letsContinue == "Yes" ){
            printf("Please enter the number for finding the all digits in it and then sum them all!... \n");
            scanf("%d", &number);
            untouchedNumber = number;
            if (number >= 0) {
            do {
                numberValueSummary += number % 10;
                printDigit++;
                number = number / 10;

            } while (number > 0);

            printf("%d %d printed digits and summary of all digits is : %d\n", untouchedNumber, printDigit, numberValueSummary);
            printDigit = 0;
            numberValueSummary = 0;
            printf("Would you like to Continue  YES/yes/Yes ?...\n");
            scanf(" %c", &letsContinue);

        } else {
            printf("Please enter the positive number not negative ...\n");
        }
    }
    return 0;
}
