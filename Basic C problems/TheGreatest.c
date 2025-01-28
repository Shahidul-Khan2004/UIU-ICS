#include <stdio.h>
#include <stdlib.h>

int main (void) {
    int a, b, c, M1, Max;
    scanf("%d %d %d", &a, &b, &c);
    M1 = (a + b + abs(a - b)) / 2;
    Max = (M1 + c + abs(M1 - c)) / 2;
    printf("%d eh o maior", Max);
}