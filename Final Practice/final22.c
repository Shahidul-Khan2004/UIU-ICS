#include <stdio.h>

int main (void) {
    int choice;
    float C, F;
    printf("Choice: ");
    scanf("%d", &choice);
    switch (choice) {
        case 1:
        printf("F: ");
        scanf("%f", &F);
        printf("The temperature in C is: %f", (5 / 9.0) * (F - 32));
        break;
        case 2:
        printf("C: ");
        scanf("%f", &C);
        printf("The temperature in F is: %f", (9 / 5.0 * C) + 32);
        break;
        default:
        printf("invalid");
    }
}