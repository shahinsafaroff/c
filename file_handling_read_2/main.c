#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *myFile;
    int stock[50];
    char itemName[50][20];
    char itemCountry[30][20];
    int index=0;

    if ((myFile = fopen("C:\\C:\\Users\\shako\\Desktop\\CDP\\writings.txt", "r")) != NULL) {
        while (!feof(myFile)){
            fscanf(myFile"%s %d %s", &itemName[index], &stock[index], &itemCountry[index]);
            index++;
        }
        printf("Item Number Item Name Left in Stock Country");
        for(int i=0; i<index; i++) {
            printf("%d. item\t\t    %s    %d     \t%s\n", i+1, itemName[i], stock[i], itemCountry[i]);
        }
    } else {
        printf("The file wasn't found int the system...\n");
    } //"w" write //"a" append //"r" read
    fclose(myFile);
    return 0;
}

//myfile includings:
//Parfum 15 Fransa
//Pizza 24 Italia
//Car 19 Germany
//MicroPhone 90 Netherlands
//Almas 19 Turkey