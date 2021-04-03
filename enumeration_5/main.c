#include <stdio.h>

enum matchResult {Won = 0, Failed = 1};

int main() {

    enum matchResult result;

    result = Failed;

    (result == Won) ? printf("Won") : printf("Failed");

    return 0;
}
