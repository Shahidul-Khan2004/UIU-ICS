/*Program that will take a, b & c as inputs and decide if the statements are True (1) of False (0)
    a) (𝑎 + 𝑏) ≤ 80
    b) !(𝑎 + 𝑐)
    c) 𝑎 != 0*/

#include <stdio.h>

int main (void) {
    int a, b, c;
    printf("Please enter a: ");
    scanf("%d", &a);
    printf("Please enter b: ");
    scanf("%d", &b);
    printf("Please enter c: ");
    scanf("%d", &c);
    printf("a) %d\nb) %d\nc) %d\n", (a + b) <= 80, !(a + c), a != 0);
}