#include <stdio.h>

int main (void) {
    char c;
    printf("please enter a  char: ");
    scanf("%c", &c);
    if (c >= 65 && c <= 90)
    {
        printf("uppercase");
    } else if (c >= 97 && c <= 122)
    {
        printf("lowercase");
    } else {
        printf("invalid case");
    }  
}