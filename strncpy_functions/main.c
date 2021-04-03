#include <stdio.h>
#include <string.h>

int main() {

    char place[20] = "Eiffel Tower";
    char country[8];

    strncpy(country, place, 7); //the first 6 chars are copied

    int i = 0;
    while (country[i] != '\0'){
        printf("%c", country[i]);
        ++i;
    }
    return 0;
}
