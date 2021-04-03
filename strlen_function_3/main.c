#include <stdio.h>
#include <string.h>

int main() {
    char password[50];
    printf("Please enter your password for setting it...\n");

    gets(password);
    int counter = 0;
    if (strlen(password) >= 10) {
        for (int i = 0; i < strlen(password); i++) {
            printf("*");
            counter++;
            if(counter==strlen(password)){
                printf("Your Password is set!...\n");
            }
    }
    }else {
        printf("Password provided is weak!...\n");
    }
    return 0;
}

