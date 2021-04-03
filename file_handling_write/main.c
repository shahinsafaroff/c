#include <stdio.h>
#include <stdlib.h>

int main() {

    FILE *myFileAddress;
    myFileAddress = fopen("C:\\C:\\Users\\shako\\Desktop\\CDP\\writings.txt", "w"); //"w" write //"a" append

    fputc('A', myFileAddress); //writes a character

    fputs('MEMEZOKUS MAXIMUS', myFileAddress); //writes a string

    fprintf(myFileAddress,"\n"); //writes a console outputs to a file

    fclose(myFileAddress);



    return 0;
}
