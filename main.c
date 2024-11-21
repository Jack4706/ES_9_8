#include <stdio.h>
#include "myFunctions.h"


int main(void) {
    int nVal;
    float somma;

    printf("inserisci il numero dei valori:\n");
    scanf("%d", &nVal);

    printf("inserisci la loro somma:\n");
    scanf("%f", &somma);

    printf("%.2f",media(nVal, somma));

    return 0;
}
