#include <stdio.h>

int main (void) {
    int n;
    printf("enter a number: ");
    scanf("%d", &n);
    if (n % 2 == 0)
    {
        printf("even number");
    } else {
        printf("odd number");
    } 
}