/*Program that will take an integer of length one from the terminal and then display the digit
in English.*/
#include <stdio.h>

int main (void) {
    int n;
    printf("enter a digit: ");
    scanf("%d", &n);
    if (n <= 9 && n >= 0) {
        switch (n) {
            case 0:
                printf("zero");
                break;
            case 1:
                printf("one");
                break;
            case 2:
                printf("two");
                break;
            case 3:
                printf("three");
                break;
            case 4:
                printf("four");
                break;
            case 5:
                printf("five");
                break;
            case 6:
                printf("six");
                break;
            case 7:
                printf("seven");
                break;
            case 8:
                printf("eight");
                break;
            case 9:
                printf("nine");
                break;
        }
    } else {
        printf("Greater than 9");
    }
}