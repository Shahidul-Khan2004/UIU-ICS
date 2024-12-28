#include <stdio.h>

int main() 
{
    char ch;
    char* s[80];
    char* sen[80];
    scanf("%c", &ch);
    scanf(" %s", &s);
    scanf("\n");
    scanf("%[^\n]%*c", &sen);
    printf("%c\n", ch);
    printf("%s\n", s);
    printf("%s\n", sen);
    return 0;
}
