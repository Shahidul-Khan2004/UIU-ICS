#include <stdio.h>

int main (void) {
    int id, lastDigit;
    char operator;
    scanf("%d %c", &id, &operator);
    lastDigit = id % 10;
    switch (operator) {
        case '*':
        printf("%d * %d * %d = %d", lastDigit, lastDigit, lastDigit, lastDigit * lastDigit * lastDigit);
        break;
        case '+':
        printf("%d + %d + %d = %d", lastDigit, lastDigit, lastDigit, lastDigit * 3);
        break;
        case '-':
        printf("%d - %d - %d = %d", lastDigit, lastDigit, lastDigit, lastDigit - lastDigit - lastDigit);
        break;
        case '/':
        printf("%d / %d / %d = %d", lastDigit, lastDigit, lastDigit, lastDigit / 3);
        break;
        default:
        printf("The input is invalid");
    }
}