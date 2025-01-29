#include <stdio.h>
#include <math.h>

int main (void) {
    float r1, r2, x1, x2, y1, y2;
    scanf("%f %f %f %f %f %f", &r1, &x1, &y1, &r2, &x2, &y2);
    float distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    if (distance + r2 <= r1) {
        printf("RICO\n");
    } else {
        printf("MORTO\n");
    }
}