#include <stdio.h>
#include <string.h>

int main() {
    char username[40] = " ";
    char name[20] = "Name: ";
    char specialty[30] = "\n Specialty: ";
    char enterName[20];
    char enterSpecialty[20];
    printf("Please enter your name and Specialty...\n");
    scanf("%s %s", enterName, enterSpecialty);

    strcat(name, enterName);
    strcat(specialty, enterSpecialty);

    strcat(username, name);
    strcat(username, specialty);

    printf("%s", username);

    return 0;
}
