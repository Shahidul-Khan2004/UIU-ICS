//Program that will decide whether a number is positive or not.
#include <stdio.h>

int main (void) {
    float num;
    printf("enter the num: ");
    scanf("%f", &num);
    if (num >= 0)
    {
        printf("Positive");
    } else
    {
        printf("Negative");
    }
}