/*Program that will take the final score of a student in a particular subject as input and find
his/her grade.*/
#include <stdio.h>

int main (void) {
    float grade;
    scanf("%f", &grade);
    if (grade <= 100 && grade >= 0)
    {
        if (grade >= 90)
        {
            printf("Grade: A");
        }
        else if (grade >= 86)
        {
            printf("Grade: A-");
        }
        else if (grade >= 82)
        {
            printf("Grade: B+");
        }
        else if (grade >= 78)
        {
            printf("Grade: B");
        }
        else if (grade >= 74)
        {
            printf("Grade: B-");
        }
        else if (grade >= 70)
        {
            printf("Grade: C+");
        }
        else if (grade >= 66)
        {
            printf("Grade: C");
        }
        else if (grade >= 62)
        {
            printf("Grade: C-");
        }
        else if (grade >= 58)
        {
            printf("Grade: D+");
        }
        else if (grade >= 55)
        {
            printf("Grade: D");
        }
        else
        {
            printf("Grade: F");
        }
        
    }
    else
    {
        printf("Not a valid grade");
    }
    
}