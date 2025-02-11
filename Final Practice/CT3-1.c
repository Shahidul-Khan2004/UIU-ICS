#include <stdio.h>

int main (void) {
    int id;
    scanf("%d", &id);
    int lastDigit = id % 10;
    printf("%d + %d + %d = %d", lastDigit + 1, lastDigit + 2, lastDigit + 3, (lastDigit * 3) + 6);
}