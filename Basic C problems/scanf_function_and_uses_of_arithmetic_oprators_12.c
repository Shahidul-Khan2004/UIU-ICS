/*Suppose that in a country, there are notes of 1, 5, 10, 50, 100 and 500 units of currencies.
Write a C program which will take as input the amount of money to give, and find out the
number of each note to provide this amount of money so that a minimal number of notes
are given in total.*/
#include <stdio.h>

int main (void) {
    int a, b, c, d, e, f, m;
    scanf("%d", &m);
    a = m / 500;
    b = (m % 500) / 100;
    c = (m % 100) / 50;
    d = (m % 50) / 10;
    e = (m % 10) / 5;
    f = (m % 5);
    printf("%d note(s) of 500n\n%d note(s) of 100\n%d note(s) of 50\n%d note(s) of 10\n%d note(s) of 5\n%d note(s) of 1", a, b, c, d, e,f);
}