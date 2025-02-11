#include <stdio.h>
#define PI 3.1416

int main (void) {
    float r;
    scanf("%f", &r);
    printf("Volume: %0.2f , Area = %0.2f", 4/3.0 * PI * r * r * r, 4 * PI * r * r);
}
