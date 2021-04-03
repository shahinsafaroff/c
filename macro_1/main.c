#include <stdio.h>
#include <stdlib.h>

# define sayTime(character) (character =='E' || character=='e') ? __TIME__ : "The User refused to know the time!"

int main() {

    char userCharacter;
    printf("Would you like to know the time?\n");
    scanf("%c", &userCharacter);

    if(sayTime(userCharacter)) {
        printf("%s", sayTime(userCharacter));
    }
    else {
        printf("%s", sayTime(userCharacter));
    }
    return 0;
}
