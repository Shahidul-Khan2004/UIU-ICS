//Program that will decide whether a number is positive or not.

#include <stdio.h>

int main (void) {
    float num;
    printf("enter the num: ");
    scanf("%f", &num);
    switch (num >= 0) {
        case 1:
            printf("Positive");
            break;
        case 0:
            printf("Negative");
            break;
    }
}