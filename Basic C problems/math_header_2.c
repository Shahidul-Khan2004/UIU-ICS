/*Write a C program that will take as input two floating point numbers a and b, and print
the value of a ^ b */
#include <stdio.h>
#include <math.h>

int main (void) {
    float a, b;
    scanf("%f", &a);
    scanf("%f", &b);
    printf("%.2f", pow(a, b));
}