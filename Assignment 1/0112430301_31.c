/*Write a program that will take number of days as input and print it in year-month-day
format.(considering all months have 30 days, 1 year = 30 *12 = 360)*/

#include <stdio.h>

int main (void) {
    int year, month, day;
    printf("Please enter the number of days: ");
    scanf("%d", &day);
    while (day >= 360) {
        year = day / 360; 
        day -= 360 * year;
    }
    while (day >= 30)
    {
        month = (day % 360) / 30;
        day -= 30 * month;
    }
    printf("%d years %d months %d days", year, month, day);
}