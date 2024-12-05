/*Calculate the area of geometric shapes (circle, rectangle, square, triangle). Write separate
programs for each shape’s area calculation.*/

#include <stdio.h>
#include <math.h>
#define pi 3.1416

int main (void) {
    int option;
    printf("Which shapes area do you want to calculate?\n 1 => Circle \n 2 => Rectangle \n 3 => Triangle \n 4 => Square\n");
    printf("Enter a option: ");
    scanf("%d", &option);
    if (0 < option && option < 5)
    {
        if (option == 1)
        {   
            float radius;
            printf("Please enter the radius: ");
            scanf("%f", &radius);
            float area = pi * pow(radius, 2);
            printf("Area of the circle is: %f", area);
        }
        // else if (/* condition */)
        // {
        //     /* code */
        // }
        // else
        // {
        //     /* code */
        // }
        
    }else
    {
        printf("Error: Enter a valid option");
    }
    
}