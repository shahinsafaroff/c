#include <stdio.h>
#include <string.h>

int main() {

    char name[50];
    printf("Please enter the string...\n");

    gets(name);

    for (int i=0; i < strlen(name); ++i){
        printf("%c", name[i]);
    }
    printf("\n");

    for(int i=strlen(name) - 1; i >=0 ; --i)
        printf("%c", name[i]);

    return 0;
}
