/*Program that will check whether a triangle is valid or not, when the three angles (angle value
should be such that, 0 < value < 180) of the triangle are entered through the keyboard.
[Hint: A triangle is valid if the sum of all the three angles is equal to 180 degrees.]*/
#include <stdio.h>

int main (void) {
    int a1, a2, a3;
    scanf("%d %d %d", &a1, &a2, &a3);
    if (a1 < 180 && a2 < 180 && a3 < 180 && a1 > 0 && a2 > 0 && a3 >0)
    {
        if (a1 + a2 + a3 == 180)
        {
            printf("Yes");
        }
        else
        {
            printf("No");
        }
        
    }
    else
    {
        printf("No");
    }
    
}