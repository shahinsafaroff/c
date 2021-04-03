#include <stdio.h>

float celcius (float fahrenheit) {
    return (fahrenheit - 32)/1.8;
}

float fahrenheit (float celcius) {
    return celcius * 1.8 + 32;
}

int main() {

    float celciusDegree;

    printf("Enter the Celcius degree for finding Fehrenheit degree ...\n");
    scanf("%f", &celciusDegree);
    printf("%f Celcius Degree is equal to %f Fahrenheit Degree...\n", celciusDegree, fahrenheit(celciusDegree));

    float fahrenheitDegree;

    printf("Enter the Fahrenheit degree for finding Celcius Degree ...\n");
    scanf("%f", &fahrenheitDegree);
    printf("%f Fahrenheit Degree is equal to %f Celcius Degree ...\n", fahrenheitDegree, celcius(fahrenheitDegree));


    return 0;
}
