/*for number n = 5 print,
5 5 5 5 5 5 5 5 5 
5 4 4 4 4 4 4 4 5 
5 4 3 3 3 3 3 4 5 
5 4 3 2 2 2 3 4 5 
5 4 3 2 1 2 3 4 5 
5 4 3 2 2 2 3 4 5 
5 4 3 3 3 3 3 4 5 
5 4 4 4 4 4 4 4 5 
5 5 5 5 5 5 5 5 5*/

#include <stdio.h>

int main() 
{

    int n;
    scanf("%d", &n);
    int x = 2 * n - 1;
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < x; j++) {
            int min = i < j ? i : j;
            min = min < x - i ? min : x - i - 1;
            min = min < x - j ? min : x - j - 1;
            //Calculate the minimum distance from the border grids
            printf("%d ", n - min);
            //The number printed in the slot will be n - minimum distance
        }
        printf("\n");
    }
    return 0;
}