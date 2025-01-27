#include <stdio.h>

int main (void) {
    int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, money;

    scanf("%d", &money);

    if (money >= 100)
    {
        a = money / 100;
    }

    if (money >= 50)
    {
        b = (money % 100) / 50;
    }

    if (money >= 20)
    {
        c = (money % 50) / 20;
    }

    if (money >= 10)
    {
        d = (money % 20) / 10;
    }
    
    if (money >= 5)
    {
        e = (money % 10) / 5;
    }

    if (money >= 1)
    {
        f = (money % 5);
    }

    printf("%d \n%d note(s) of 100\n%d note(s) of 50\n%d note(s) of 20\n%d note(s) of 10\n%d note(s) of 5\n%d note(s) of 1", money, a, b, c, d, e, f);
}