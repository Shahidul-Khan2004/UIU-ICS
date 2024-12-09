//Program that will calculate the circumference of a circle having radius r.

#include <stdio.h>
#define PI 3.14

int main (void) {
    float r, area;
    printf("Please enter the radius: ");
    scanf("%f", &r);
    area = 2 * PI * r;
    printf("Area: %.2f", area);
}