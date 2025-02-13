#include <stdio.h>

int main (void) {
    int choice;
    float distance;
    printf("Select the service:\n1.Car\n2.Bus\n3.Bike\nEnter your choice: ");
    scanf("%d", &choice);
    printf("enter the distance: ");
    scanf("%f", &distance);
    switch (choice) {
        case 1:
        printf("You selected Car\nThe total charge of your trip is: %f", distance * 500);
        break;
        case 2:
        printf("You selected Bus\nThe total charge of your trip is: %f", distance * 300);
        break;
        case 3:
        printf("You selected Bike\nThe total charge of your trip is: %f", distance * 100);
        break;
        default:
        printf("Invalid service type selected");
    }
}