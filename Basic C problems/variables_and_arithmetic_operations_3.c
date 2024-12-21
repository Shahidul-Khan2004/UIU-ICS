/*Write a C program where you will declare two floating point variables, initialize them by
values of your choice, and perform the basic arithmetic operations on them. Note that
the remainder operation is invalid for floating point numbers.*/
#include <stdio.h>

int main (void) {
    float a = 95.401, b = 22.622;
    printf("%.3f + %.3f = %.3f\n%.3f - %.3f = %.3f\n%.3f * %.3f = %.6f\n%.3f / %.3f = %.6f", a, b, a + b, a, b, a - b, a, b, a * b, a, b, a / b);
}