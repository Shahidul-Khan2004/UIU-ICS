/*Write a C program where you will declare four floating point variables (say a, b, c and d),
initialize them by values of your choice, and calculate (a + b – c) * d – a / d.*/
#include <stdio.h>

int main (void) {
    float a = 2.3, b = 5.8, c = 1.1, d = 3.5;
    printf("(%.1f + %.1f - %.1f) * %.1f - %.1f / %.1f = %.6f", a, b, c, d, a, d, (a + b - c) * d - a / d);
}