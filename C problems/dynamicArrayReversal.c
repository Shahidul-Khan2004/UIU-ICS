#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, *temp, i, j;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    temp = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }

    for(i = 0, j = num; i < num; i++, j--){
        temp[i] = arr[j - 1];
    }
    for(i = 0; i < num; i++)
        printf("%d ", *(temp + i));
    return 0;
}