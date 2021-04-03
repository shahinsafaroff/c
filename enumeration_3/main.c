#include <stdio.h>
#include <stdlib.h>

enum week {Monday = 1, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};

int main() {
    for (int i = Monday; i<= Sunday; ++i ) {
        printf("%d\n", i);
    }
    return 0;
}
