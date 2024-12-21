/*Write a C program where you will declare four integer variables (say a, b, c and d), input
them using scanf, and calculate a * b + (a - c) / d + b.*/
#include <stdio.h>

int main (void) {
    int a, b, c, d;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);
    printf("%d * %d + (%d - %d) / %d + %d = %d", a, b, a, c, d, b, a * b + (a - c) / d + b);
}