#include <stdio.h>

struct book { ;
    char name[50];
    char author[30];
    int printYear;
    float price;
};

int main() {
    struct book romanBooks[2] = {
            {"9th Level", "Payami Safa", 1980, 93.5},
            {"Crime and Punishment", "Dostoyevski", 1975, 97.75}
    };
    float sum = 0;
    for(int i=0; i<2; ++i){
        printf("%d. book name: %s author: %s printed: %d price: %f",i+1, romanBooks[i].name, romanBooks[i].author, romanBooks[i].printYear, romanBooks[i].price);
        sum += romanBooks[i].price;
    }
    printf("totalSum: %.2f", sum);
    return 0;
}
