#include <stdio.h>

int main (void) {
    float x, y;
    scanf("%f %f", &x, &y);
    if (x == 0 && y == 0) {
        printf("point in center");
    }
    else if (x == 0 && y != 0) {
        printf("on Y-axis");
    }
    else if (x != 0 && y == 0) {
        printf("on X-axis");
    }
    else if (x > 0 && y > 0) {
        printf("Fisrt Quadrant");
    }
    else if (x > 0 && y < 0) {
        printf("Fourth Quadrant");
    }
    else if (x < 0 && y > 0) {
        printf("Second Quadrant");
    }
    else if (x < 0 && y < 0) {
        printf("Third Quadrant");
    }
    else {
        printf("invalid input");
    }
}