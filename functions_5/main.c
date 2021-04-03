#include <stdio.h>

int evenOrOddControl(int count) {
    if(count%2 ==0){
        return 0;
    }
    else {
        return 1;
    }
}

int main() {
    for (int i = 0; i<201; ++i) {
        if(evenOrOddControl(i)==1) {
            printf("%d is odd...\n", i);
        }
        else {
            printf("%d is Even...\n", i);
        }
    }
    return 0;
}
