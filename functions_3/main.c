#include <stdio.h>

void listTheNames (char nameList[][30], int length) { // namelist[5] is taken from workerNames[5][30] array,
    // However namelist's[][30] [30] can't be taken from main function declared array.
    for (int i = 0; i< length; ++i) {
        printf("%s\n", nameList[i]);
    }
}

int main() {

    char workerNames[5][30] = {"Memezok", "Pepezok", "Shentizok", "Fifizok", "Endirkoza"};

    listTheNames(workerNames, 6);

    return 0;
}
