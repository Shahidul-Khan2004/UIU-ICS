#include <stdio.h>
#include <math.h>

int main (void) {
    float x, y, h, k, r, A, C;
    printf("Enter the coordinates of a point on circle: ");
    scanf("%f %f", &x, &y);
    printf("Enter the center coordinates of the circle: ");
    scanf("%f %f", &h, &k);
    r = sqrt(pow((x - h), 2) + pow((y - k), 2));
    printf("Area = %f\n", 3.14159*r*r);
    printf("Circumference = %f\n", 3.14159*r*2);
}