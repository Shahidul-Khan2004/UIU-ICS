#include <stdio.h>

int main (void) {
    float r, a, c, s;
    scanf("%f %f", &a, &r);
    s = a * a;
    c = 3.14159 * r * r;
    float ShadedArea = s - c;
    printf("Shaded Area = %f", ShadedArea);
}