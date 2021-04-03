#include <stdio.h>
//ITERATIVE FUNCTIONS --- Repeating --Refreshing Functions

int factorial(int count) {

    int result = 1;
    for (int i = 0; i < count; ++ i) {
        result = result * (i + 1);
    }

    return result;
}

int main() {
    printf("%d", factorial(5));
    return 0;
}
