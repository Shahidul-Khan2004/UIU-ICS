#include <stdio.h>

int main (void) {
    int a, b;
    printf("enter a: ");
    scanf("%d", &a);
    printf("enter b: ");
    scanf("%d", &b);
    if (a > b)
    {
        printf("a is greater than b");
    } else if (a < b)
    {
        printf("a is less than b");
    } else {
        printf("a adn b are equal");
    }
}