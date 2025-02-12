#include <stdio.h>

int main (void) {
    float theta;
    scanf("%f", &theta);
    if (theta > 0 && theta < 360) {
        if (theta <= 90) {
            printf("First Quardant");
        }
        else if (theta <= 180) {
            printf("Second Quardant");
        }
        else if (theta <= 270) {
            printf("Third Quardant");
        }
        else if (theta <= 360) {
            printf("Fourth Quardant");
        }
    }
    else {
        printf("invalid theta");
    }
}