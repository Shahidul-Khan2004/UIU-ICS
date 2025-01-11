#include <stdio.h>

int main (void) {
    int a, b;
    printf("enter 1st number: ");
    scanf("%d", &a);
    printf("enter 2nd number: ");
    scanf("%d", &b);
    if (a > b)
    {
        printf("%d", a);
    } else if (a < b)
    {
        printf("%d", b);
    } else {
        printf("They are equal.");
    }
}