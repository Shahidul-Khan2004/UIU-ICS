#include <stdio.h>

int main (void) {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if (a > b)
    {
        if (a > c)
        {
            if (a > d)
            {
                printf("The largest number is %d.", a);
            }
            else
            {
                printf("The largest number is %d.", d);
            }
            
        }
        else
        {
            if (c > d)
            {
                printf("The largest number is %d.", c);
            }
            else
            {
                printf("The largest number is %d.", d);
            }
            
        }
        
    }
    else
    {
        if (b > c)
        {
            if (b > d)
            {
                printf("The largest number is %d.", b);
            }
            else
            {
                printf("The largest number is %d.", d);
            }
        }
        else
        {
            if (c > d)
            {
                printf("The largest number is %d.", c);
            }
            else
            {
                printf("The largest number is %d.", d);
            }
        }
        
    }
    
}