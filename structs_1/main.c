#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student {
    char name[30];
    char surname[30];
    char school[30];
    char department[30];
    int schoolNumber;
    int class;
}csStudent1, csStudent2;


int main() {
    strcpy(csStudent1.name, "Shagen");
    strcpy(csStudent1.surname, "Essehrmann");
    strcpy(csStudent1.school, "245");
    strcpy(csStudent1.department, "Computer Engineering");
    csStudent1.schoolNumber = 24511;
    csStudent1.class = 1;

    strcpy(csStudent2.name, "Shagen");
    strcpy(csStudent2.surname, "Essehrmann");
    strcpy(csStudent2.school, "245");
    strcpy(csStudent2.department, "Computer Engineering");
    csStudent2.schoolNumber = 24511;
    csStudent2.class = 1;

    printf("%s\n %s\n %s\n %s\n %d\n %d\n", csStudent1.name, csStudent1.surname, csStudent1.school,csStudent1.department, csStudent1.schoolNumber, csStudent1.class);
    return 0;
}
