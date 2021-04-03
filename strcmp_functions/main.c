#include <stdio.h>
#include <string.h>

int main() {

    char userName[20];
    char password[20];
    char validUsername[20] = "admin";
    char validPassword[20] = "memezok";

    printf("Please enter username and password for entering system\n");
    scanf("%s%s", userName, password);

    if((strcmp(userName,validUsername)==0) && (strcmp(password,validPassword)==0)) {
        printf("Welcome %s", userName);
    }else {
        printf("Your credentials are invalid...\n");
    }
    if (strcmp(userName,validUsername)!=0) {
        printf("Entered Username is invalid...\n");
    }
    if (strcmp(password,validPassword)!=0) {
        printf("Entered Password is invalid...\n");
    }
    return 0;
}
