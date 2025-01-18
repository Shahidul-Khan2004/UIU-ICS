/*Program for “Guessing Game”:
Player-1 picks a number X and Player-2 has to guess that number within N = 3 tries. For each
wrong guess by Player-2, the program prints “Wrong, N-1 Chance(s) Left!” If Player-2
successfully guesses the number, the program prints “Right, Player-2 wins!” and stops
allowing further tries (if any left). Otherwise after the completion of N = 3 wrong tries, the
program prints “Player-1 wins!” and halts.*/

#include <stdio.h>

int main(void) {
    int X, n1, n2, n3;
    scanf("%d", &X);
    scanf("%d", &n1);
    if (X == n1)
    {
        printf("Right, Player-2 wins!\n");
    } else {
        printf("Wrong, 2 Chance(s) Left!\n");
    }
    scanf("%d", &n2);
    if (X == n2)
    {
        printf("Right, Player-2 wins!\n");
    } else {
        printf("Wrong, 1 Chance(s) Left!\n");
    }
    scanf("%d", &n3);
    if (X == n3)
    {
        printf("Right, Player-2 wins!\n");
    } else {
        printf("Player-1 wins!");
    }
}