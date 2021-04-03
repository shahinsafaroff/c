#include <stdio.h>
#include <string.h>

int main() {

    char phone[20] = "997 Israel";
    char country[4];

    strncpy(country, phone, 3); //the first 6 chars are copied

    int i = 0;
    while (country[i] != '\0'){
        printf("%c", country[i]);
        ++i;
    }
    return 0;
}
