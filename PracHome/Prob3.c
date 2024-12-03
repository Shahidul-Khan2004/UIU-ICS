/*Make a simple interest calculator for bank accounts that takes
the principal, interest rate and time as input and finds the
interest accordingly.*/

#include <stdio.h>

int main (void) {
    float principal, interestRate, time, simpleInterest;
    printf("Enter the principal you have in your bank account: ");
    scanf("%f", &principal);
    printf("Enter your bank\'s interest rate: ");
    scanf("%f", &interestRate);
    printf("Enter the time this principal has been in the bank (years): ");
    scanf("%f", &time);
    simpleInterest = (principal * (interestRate / 100)) * time;
    printf("Simple interest: %f", simpleInterest);
}