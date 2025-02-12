#include <stdio.h>

int main (void) {
    float a, b, c, avg;
    scanf("%f %f %f", &a, &b, &c);
    if (a >= 0 && a <= 100 && b >= 0 && b <= 100 && c >= 0 && c <= 100) {
        avg = (a + b + c) / 3.0;
        if (avg >= 89) {
            printf("Average = %f\nQuality = Brilliant", avg);
        }
        else if (avg >= 74) {
            printf("Average = %f\nQuality = good", avg);
        }
        else if (avg >= 5) {
            printf("Average = %f\nQuality = moderate", avg);
        }
        else {
            printf("Average = %f\nQuality = Bad", avg);
        }
    }
    else {
        printf("invalid score");
    }

}