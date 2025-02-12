#include <stdio.h>

int main (void) {
    char a;
    scanf("%c", &a);
    switch (a) {
        case 'A' ... 'Z':
        printf("Uppercase\n");
        break;
        case 'a' ... 'z':
        printf("Lowercase\n");
        break;
        default:
        printf("invalid character");
    }
}