#include <stdio.h>

enum seasons {Spring=1, Summer, Autumn, Winter};

int main() {

    enum seasons season;

    season = Spring;

    printf("%d", season);

    return 0;
}
