//Write a C program to create Simple Calculator using switch case.

#include <stdio.h>

int main(){
    char choice;
    float num1, num2;

    printf("Please enter the 1st number: ");
    scanf("%f", &num1);
    printf("Please enter the 2nd number: ");
    scanf("%f", &num2);
    printf("Please enter your choice (+,-,*,/,%%): ");
    scanf("%c", &choice);

    switch(choice){
        case '+':
            printf("Addition: %f\n", num1 + num2);
            break;
        case '-':
            printf("Subtraction: %f\n", num1 - num2);
            break;
        case '*':
            printf("Multiplication: %f\n", num1 * num2);
            break;
        case '/': 
            switch (num2 == 0)
            {
            case 1:
                printf("Error: Division by zero is not allowed!\n");
                break;
            
            default:
                printf("Quotient: %d\n", num1 / num2);
                break;
            }
            break;
        case '%':
            printf("Remainder: %d\n", (int) num1 % (int) num2);
            break;
        default:
            printf("Error: Invalid choice! Please enter a valid operator.\n");
    }    
}