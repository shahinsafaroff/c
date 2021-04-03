#include <stdio.h>
//RECURSIVE FUNCTIONS --- SelfRepeating Inside functions --Refreshing Functions

int recursiveFactorial(int count) {

    if(count <= 1) {
        return 1;
    } else {
        return count * recursiveFactorial(count - 1);
    }
}

int main() {

    printf("%d", recursiveFactorial(5));
    return 0;
}
