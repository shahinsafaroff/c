#include <stdio.h>
#include <stdlib.h>

int main() {

    FILE *myFileAddress;
    myFileAddress = fopen("C:\\C:\\Users\\shako\\Desktop\\CDP\\writings.txt", "w"); //"w" write //"a" append

    char name[10];
    printf("Please enter the name...\n");
    gets(name);//similar to scanf however gets the value right from user and assigns to variable

    fprintf(myFileAddress,"My name is: %s", name); //writes a console outputs to a file

    fclose(myFileAddress);

    return 0;
}