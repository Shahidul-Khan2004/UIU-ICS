/*. Write a C program which will take as input a time interval in seconds, and represent it in
hour-minute-second format.*/
#include <stdio.h>

int main (void) {
    int t, h, m, s;
    scanf("%d", &t);
    h = t / 3600;
    m = (t % 3600) / 60;
    s = t % 60;
    printf("%d hour %d minute %d second", h, m, s);
}