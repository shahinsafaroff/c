#include <stdio.h>

int main() {
    char *teams[] = {"Real Madrid", "Atletico", "GalataSaray", "Lucifers", "Memezokus"};
    for (int i = 0; teams[i]!='\0'; ++i) {
        printf("%s\n", *(teams+i));
    }
    return 0;
}
