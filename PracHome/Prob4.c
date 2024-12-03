/*Let’s calculate a garment (or any) worker’s salary calculator. Takes in daily rate and days
worked, then calculates monthly salary. Then also takes in overtime hourly rate and hours
worked to find salary with overtime.*/

#include <stdio.h>

int main (void) {

    float dailyWage, daysWorked, salary, overtimeHourlyWage, hoursWorked, totalSalary;

    printf("Enter your basic salary per day: ");
    scanf("%f", &dailyWage);
    printf("Enter how many days you worked last month: ");
    scanf("%f", &daysWorked);
    salary = dailyWage * daysWorked;
    printf("Your basic salary for last month is: %f\n", salary);
    printf("How many hours did you work overtime last month: ");
    scanf("%f", &hoursWorked);
    printf("Enter your overtime rate: ");
    scanf("%f", &overtimeHourlyWage);
    totalSalary = salary + (hoursWorked * overtimeHourlyWage);
    printf("Your basic salary last month (with overtime pay) is: %.2f", totalSalary);
}