#include <stdio.h>

int main (void) {
    int a, b, c, d, e, f, m, money;

    scanf("%d", &money);

    if (money >= 100)
    {
        a = money / 100;
        b = (money % 100) / 50;
        c = (money % 50) / 20;
        d = (money % 20) / 10;
        e = (money % 10) / 5;
        f = (money % 5);
        printf("%d\n%d note(s) of 100\n%d note(s) of 50\n%d note(s) of 20\n%d note(s) of 10\n%d note(s) of 5\n%d note(s) of 1", money, a, b, c, d, e, f);
    }
    
}