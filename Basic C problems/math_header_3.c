/*Write a C program that will take as input an angle in radian, and calculate the sine, the
cosine and the tangent of the angle.*/
#include <stdio.h>
#include <math.h>

int main (void) {
    float angle;
    scanf("%f", &angle);
    printf("Sine = %0.2f\nCosine = %.2f\nTangent = %.2f", sin(angle), cos(angle), tan(angle));
}