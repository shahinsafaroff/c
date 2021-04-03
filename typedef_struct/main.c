#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct students {
    int schoolNumber;
    char name[15];
    char surname[15];
    int class;
    char department;
    double middleScore;
} student;
int main() {
    student student1;
    student student2;

    student1.schoolNumber = 450;
    student2.schoolNumber = 451;
    strcpy (student1.name, "Shagen Essherman");
    strcpy (student2.name, "Esper Mauzikh");
    student1.middleScore = 88.5;
    student2.middleScore = 79.7;


    printf("%s\n", student1.name);
    printf("%s\n", student2.name);


    return 0;
}
