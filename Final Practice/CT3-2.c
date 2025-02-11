#include <stdio.h>

int main (void) {
    int a, b, c, min;
    scanf("%d %d %d", &a, &b, &c);
    if (a < b && a < c) {
        min = a;
    } 
    else if (b < c && b < a)
    {
        min = b;
    }
    else
    {
        min = c;
    }
    if (min % 3 == 0 && min % 2 == 0)
    {
        printf("Purple Number");
    }
    else if (min % 2 == 0) 
    {
        printf("Red Number");
    } 
    else if (min % 3 == 0) 
    {
        printf("Blue Number");
    }
    else
    {
        printf("White Number");
    }
    
}