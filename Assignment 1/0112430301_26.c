/*Program that will take a, b & c as inputs and decide if the statements are True (1) of False (0)
    1) (𝑎 + 𝑏) ≤ 80 && 𝑏 ≥ 0
    2) (𝑎 − 𝑏) == 0 ||𝑐 != 0
    3) 𝑎 != 𝑏 || (𝑏 < 𝑎)&&𝑐 > 0*/

#include <stdio.h>

int main (void) {
    int a, b, c;
    printf("Please enter a: ");
    scanf("%d", &a);
    printf("Please enter b: ");
    scanf("%d", &b);
    printf("Please enter c: ");
    scanf("%d", &c);
    printf("a) %d\n", (a + b) <= 80 && b >= 0);
    printf("b) %d\n", (a - b) == 0  || c != 0);
    printf("c) %d\n", a != b || (b < a) && c > 0);
}