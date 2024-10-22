#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int *arr;

    printf("Enter the Numbers :");
    scanf("%d",&n);

    arr = (int *)malloc(n * sizeof(int));

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("The elements of the array are:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);

    return 0;

}
