#include <stdio.h>
#include <stdlib.h>

int main() {
    int *allocation1 = malloc(10 * sizeof(int));
    int *allocation2 = calloc( 10 , sizeof(int));

    for (int i=0; i<10; i++) {
        printf("allocation1[%d] = %d   alan2[%d] = %d ", i, allocation1[i], i, allocation2[i]);
    }

    allocation1 = realloc(allocation1, 15*sizeof (int ));
    for(int i=0; i<15; ++i){
        printf("allocation1[%d] = %d\n", i, allocation1[i]);
    }
    free(allocation1);
    free(allocation2);
    return 0;
}

