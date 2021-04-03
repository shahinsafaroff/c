#include <stdio.h>

int main() {

    char countries[5][20];

    for(int i=0; i<5; ++i) {
        printf("%d. Entered to the Country\n", i+1);
        scanf("%s", countries[i]);
    }
    // VIA NORMAL
 /*   for(int i = 0; i<5; ++i) {
        printf("%s\n", countries[i]);
    }*/

    //VIA POINTERS
    char *countryAddresses[5];

    for(int i=0; i<5; ++i){
        countryAddresses[i] = &countries[i];
    }

    for(int i=0; i<5; ++i ){
        printf("%s\n", *(countryAddresses +i));
    }

    return 0;
}
