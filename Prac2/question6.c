//Take a character input and print its corresponding ASCII value.

#include <stdio.h>

int main (void) {
    char ascii;
    printf("Enter a charecter: ");
    scanf("%c", &ascii);
    printf("%d", ascii);
}