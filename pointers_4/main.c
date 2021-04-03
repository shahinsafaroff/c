#include <stdio.h>

int main() {
    int x, y = 0;
    int *a1, *a2 = &y;

    a1 = a2;

    x = ++(*a2);
    *a2 = *a1 +x;

    printf("%d %d %d %d", x, y, *a1, *a2);

    return 0;
}
