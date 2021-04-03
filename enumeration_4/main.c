#include <stdio.h>

enum months { January, February, March, April, May, June, July, August, September, October, November, December};

#define JanuaryMacro 1
#define DecemberMacro 12

int main() {
   for (int i = JanuaryMacro; i <= DecemberMacro; ++i) {
        printf("%d ", i);
    }
    return 0;
}
