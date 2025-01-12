//Program that will decide whether a number is even or odd.
#include <stdio.h>

int main (void) {
    int num;
    printf("enter the num: ");
    scanf("%d", &num);
    if (num % 2 == 0)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }
    
}