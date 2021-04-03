/*
#include <stdio.h>

int main() {
    char student[4][20] = {"Memezok", "Pepezok", "Meningit", "Muskulist"};

    for (int i=0; i<4; i++){
        printf("%s\n", student[i]);
    }

    return 0;
}
*/

#include <stdio.h>

int main() {
    char student[2][5][20];

    for (int i=0; i<4; i++){
        for (int j = 0; j < 5; j++) {
            printf("Please enter %d.th Class %d. numbered Student name: ..\n", i+1, j+1);
            scanf("%s\n", student[i][j]);
        }
    }
    for (int i=0; i<4; i++) {
        for (int j = 0; j < 5; j++) {
            printf(" %d.th Class %d. numbered Student name is: = %s\n", i + 1, j + 1, student[i][j]);
        }
    }
        printf("%s\n", student[0]);
        printf("%s\n", student[1]);
            return 0;
}