/*create an array of size n dynamically, and read the values from stdin.
Iterate the array calculating the sum of all elements.
Print the sum and free the memory where the array is stored.
*/
#include <stdio.h>
#include <stdlib.h>

int main() {

    int n, sum = 0;
    scanf("%d", &n);
    getchar();
    int *arr = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    printf("%d", sum);
    free(arr);
    return 0;
}