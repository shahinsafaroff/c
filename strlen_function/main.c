#include <stdio.h>
#include <string.h>


int main() {
    char name[15];
    printf("Please enter string here ...\n");
    gets(name);
    int length = strlen(name);


    for (int i=0; i<length; ++i) {
        printf("%c", name[i]);
    }
    printf("\n");

    for (int i=length; i >=0; i--)
        printf("%c", name[i]);
    return 0;
}
