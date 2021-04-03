#include <stdio.h>
#include <string.h>


int main() {

    char place[20] = "Eiffel Tower";
    char country[8];

    //strcpy(country, place);
    strncpy(country, place, 7); //the first 6 chars are copied

    printf("Country Contains: %s", country);
    return 0;
}
