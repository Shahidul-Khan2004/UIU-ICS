/*Program that will construct a menu for performing arithmetic operations. The user will give
two real numbers (a, b) on which the arithmetic operations will be performed and an integer
number (1 <= Choice <= 4) as a choice. Choice-1, 2, 3, 4 are for performing addition,
subtraction, multiplication, division respectively.

If Choice-4 is selected, again the program will ask for another choice (1 <= Case <=2), where
Case-1, 2 evaluate quotient and remainder respectively.*/
#include <stdio.h>

int main(void) {
    float num1, num2;
    int choice, choice1;

    printf("Please enter the 1st number    : ");
    scanf("%f", &num1);
    printf("Please enter the 2nd number    : ");
    scanf("%f", &num2);
    printf("Please enter your choice       : ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Addition: %.2f\n", num1 + num2);
    } else if (choice == 2) {
        printf("Subtraction: %.2f\n", num1 - num2);
    } else if (choice == 3) {
        printf("Multiplication: %.2f\n", num1 * num2);
    } else if (choice == 4) {
        printf("Please enter your second choice: ");
        scanf("%d", &choice1);
        if (choice1 == 1) {
            printf("Quotient: %d\n", (int) num1 / (int) num2);
        } else if (choice1 == 2) {
            printf("Remainder: %d\n", (int) num1 % (int) num2);
        } else {
            printf("Error: Invalid choice! Please enter a number between 1 and 2.\n");
        }
    } else {
        printf("Error: Invalid choice! Please enter a number between 1 and 4.\n");
    }
}