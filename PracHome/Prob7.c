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
        else if (option == 2)
        {
            float height, width;
            printf("Please enter the height of your rectangle: ");
            scanf("%f", &height);
            printf("Please enter the width of your rectangle: ");
            scanf("%f", &width);
            float area = height * width;
            printf("Area of the rectangle is: %f", area);
        }
        else if (option == 3)
        {
            float height, base;
            printf("Please enter the height of your triangle: ");
            scanf("%f", &height);
            printf("Please enter the base of your triangle: ");
            scanf("%f", &base);
            float area = (height * base) * 0.5;
            printf("Area of the triangle is: %f", area);
        }
        else
        {
            float side;
            printf("Please enter the side of your square: ");
            scanf("%f", &side);
            float area = pow(side, 2);
            printf("Area of the square is: %f", area);
        }
        
        
    }else
    {
        printf("Error: Enter a valid option");
    }
    
}