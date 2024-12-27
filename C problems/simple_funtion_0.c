#include <stdio.h>

int add (int x, int y);

int sub (int x, int y);

int main (void) {
    int a, b;
    printf("Please enter the 1st number: ");
    scanf("%d", &a);
    printf("Please enter the 2nd number: ");
    scanf("%d", &b);
    printf("%d + %d = %d\n", a, b, add(a, b));
    printf("%d - %d = %d", a, b, sub(a, b));
}

int add (int x, int y) {
    return x + y;
}

int sub (int x, int y) {
    return x - y;
}