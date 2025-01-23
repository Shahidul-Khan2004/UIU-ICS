//Program that will take the final score of a student in a particular subject as input and find his/her grade.

#include <stdio.h>

int main(void) {
    int grade;

    printf("Enter the final score (0-100): ");
    scanf("%d", &grade);

    switch (grade >= 0 && grade <= 100) {
        case 0: 
            printf("Invalid input.\n");
            break;
        case 1:
            switch (grade) {
                case 90 ... 100:
                    printf("Grade: A\n");
                    break;
                case 86 ... 89:
                    printf("Grade: A-\n");
                    break;
                case 82 ... 85:
                    printf("Grade: B+\n");
                    break;
                case 78 ... 81:
                    printf("Grade: B\n");
                    break;
                case 74 ... 77:
                    printf("Grade: B-\n");
                    break;
                case 70 ... 73:
                    printf("Grade: C+\n");
                    break;
                case 66 ... 69:
                    printf("Grade: C\n");
                    break;
                case 62 ... 65:
                    printf("Grade: C-\n");
                    break;    
                case 58 ... 61:
                    printf("Grade: D+\n");
                    break;    
                case 55 ... 57:
                    printf("Grade: D\n");
                    break;
                default:
                    printf("Grade: F\n");
            }
            break;
    }

    return 0;
}