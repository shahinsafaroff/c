#include <stdio.h>
#include <stdlib.h>

struct book {
    char name[50];
    char author[30];
    int releaseYear;
    float price;
} romanBooks[2] = {
        {"9th Level", "Payami Safa", 1980, 93.5},
        {"Crime and Punishment", "Dostoyevski", 1975, 97.75}
};

int main() {
    float sum = 0;
    for(int i=0; i<2; ++i){
        sum += romanBooks[i].price;
    }
    printf("totalSum: %.2f", sum);
    return 0;
}
