/*Write a C program where you will declare four integer variables (say a, b, c and d),
initialize them by values of your choice, and calculate a * b + (a – c) / d + b.*/
#include <stdio.h>

int main (void) {
    int a = 21, b = 15, c = 34, d = 6;
    printf("%d * %d + (%d - %d) / %d + %d = %d", a, b, a, c, d, b, a * b + (a - c) / d + b);
}