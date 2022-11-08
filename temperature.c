#include <stdio.h>
#include "temperature.h"

#define BASE 32
#define FAHR_COEF 1.8
#define CEL_COEF .5556

float celToFah(float celsius) {
    return (celsius * FAHR_COEF) + BASE;
}

float fahToCel(float fah) {
    return (fah - BASE) * CEL_COEF;
}

int getConversions() {

    int celsius = 0, END = 40;

    printf("--------------------------------------\n");
    printf("| Celsius values | Fahrenheit values |\n");

    while(celsius <= END) {

        float fahr = celToFah(celsius);

        printf("|%12d C° | %15.2f F°|\n", celsius, fahr);

        celsius++;
    }
    printf("--------------------------------------\n");

    return 0;
}


