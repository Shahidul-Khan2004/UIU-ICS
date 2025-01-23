/*Program that will construct a menu for performing arithmetic operations. The user will give
two real numbers (a, b) on which the arithmetic operations will be performed and an integer
number (1 <= Choice <= 4) as a choice. Choice-1, 2, 3, 4 are for performing addition,
subtraction, multiplication, division respectively.

If Choice-4 is selected, the program will check if b is nonzero.
If the check is true, the program will ask for another choice (1 <= Case <=2), where Case-1, 2
evaluate quotient and reminder respectively. If the check is false, it will print an error message
“Error: Divisor is zero” and halt. */

#include <stdio.h>

int main (void) {
    float num1, num2;
    int choice, choice1;

    printf("Please enter the 1st number    : ");
    scanf("%f", &num1);
    printf("Please enter the 2nd number    : ");
    scanf("%f", &num2);
    printf("Please enter your choice       : ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Addition: %.2f\n", num1 + num2);
            break;
        case 2:
            printf("Subtraction: %.2f\n", num1 - num2);
            break;
        case 3:
            printf("Multiplication: %.2f\n", num1 * num2);
            break;
        case 4:
            switch (num2 == 0) {
                case 0:
                    printf("Please enter the second choice : ");
                    scanf("%d", &choice1);
                    switch (choice1) {
                        case 1:
                            printf("Quotient: %d\n", num1 / num2);
                            break;
                        case 2:
                            printf("Reminder: %d\n", (int) num1 % (int) num2);
                    }
                    break;
                case 1:
                    printf("Error: Divisor is zero");
                    break;
            }
            break;
    }
}