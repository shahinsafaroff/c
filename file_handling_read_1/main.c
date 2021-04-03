#include <stdio.h>
#include <stdlib.h>

int main() {

    FILE *myFile;
    char text[30];

    if ((myFile = fopen("C:\\C:\\Users\\shako\\Desktop\\CDP\\writings.txt", "r")) != NULL) {
        fgets(text, 50,myFile); //finds and prints first 50 characters from myfile
        puts(text); //and prints to console
    } else {
        printf("The file wasn't found int the system");
    } //"w" write //"a" append //"r" read
    fclose(myFile);
    return 0;
}