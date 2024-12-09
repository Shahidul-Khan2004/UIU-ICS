/*Program that will evaluate the equation
2 𝐜𝐨𝐬^2 x - √3 𝐬𝐢𝐧 x + 𝐬𝐢𝐧 x/2; where 1<= x <=180 [No checking needed]*/
#include <stdio.h>
#include <math.h>

int main (void) {
    float x, result;
    printf("Please enter x: ");
    scanf("%f", &x);
    result = 2 * pow(cos(x), 2) - sqrt(3) * sin(x) + sin(x / 2);
    printf("%f", result);
}