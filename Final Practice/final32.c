#include <stdio.h>

int main (void) {
    int choice;
    float gbs;
    printf("Select the data package: \n1. Basic Package \n2. Standard Package\n3. Premium Package\nEnter your choice: ");
    scanf("%d", &choice);
    
    if (choice == 1) {
        printf("Enter the number of GBs you want to use: ");
        scanf("%f", &gbs);
        printf("You selected the Basic Package.\nThe total charge of your package is: %f", gbs * 50);
    }
    else if (choice == 2) {
        printf("Enter the number of GBs you want to use: ");
        scanf("%f", &gbs);
        printf("You selected the Standard Package.\nThe total charge of your package is: %f", gbs * 100);
    }
    else if (choice == 3) {
        printf("Enter the number of GBs you want to use: ");
        scanf("%f", &gbs);
        printf("You selected the Premium Package.\nThe total charge of your package is: %f", gbs * 150);
    } else {
        printf("Invalid package type selected");
    }
}