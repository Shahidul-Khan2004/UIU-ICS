/*Write a C program where you will declare two floating point variables, input them using
scanf, and perform the basic arithmetic operations on them.*/
#include <stdio.h>

int main (void) {
    float a, b;
    scanf("%f", &a);
    scanf("%f", &b);
    printf("%.3f + %.3f = %.3f\n%.3f - %.3f = %.3f\n%.3f * %.3f = %.6f\n%.3f / %.3f = %.6f", a, b, a + b, a, b, a - b, a, b, a * b, a, b, a / b);
}