/*. Program that will categorize a single character that is entered at the terminal, whether it is
an alphabet, a digit or a special character.*/
#include <stdio.h>

int main (void) {
    char character;
    scanf("%c", &character);
    if ((character >= 65 && character <= 90) || (character >= 97 && character <= 122))
    {
        printf("Alphabet");
    }
    else if (character >= 48 && character <= 57)
    {
        printf("Digit");
    }
    else
    {
        printf("Special");
    }
    
}