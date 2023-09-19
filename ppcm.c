#include <stdio.h>

void main() {
    int a,b;
        printf("entrer le premier nombre:");
        scanf("%d",&a);
        printf("entrer le deuxieme nombre:");
        scanf("%d",&b);

    int max = (a > b) ? a : b;
    int min = (a < b) ? a : b;
    int ppcm = max;

    while (ppcm % min != 0) {
        ppcm += max;
    }
    printf("le ppcm est %d:",ppcm);

}