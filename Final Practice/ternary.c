#include <stdio.h>

int main (void) {
    int choice, a, b;
    scanf("%d %d", &a, &b);
    scanf("%d", &choice);
    (choice == 1) ? printf("%d", a + b) : printf("");
    (choice == 2) ? printf("%d", a - b) : printf("");
    (choice == 3) ? printf("%d", a * b) : printf("");
    (choice == 4) ? printf("choice is 4\n"), (b == 0) ? printf("invalid") : printf("%d", a / b) : printf("");
}