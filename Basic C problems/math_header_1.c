/*Write a C program that will take as input a floating-point number, and print the floor and
the ceiling of that number.*/
#include <stdio.h>
#include <math.h>

int main (void) {
    float num;
    scanf("%f", &num);
    printf("Floor = %.0f\nCeiling = %.0f", floorf(num), ceilf(num));
}