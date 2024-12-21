/*Write a C program which will calculate the area of a circle, given its radius. (Assume that
pi = 3.14159)*/
#include <stdio.h>
#include <math.h>

#define PI 3.14159

int main (void) {
    float r;
    scanf("%f", &r);
    printf("Area: %.5f", PI*pow(r,2));
}