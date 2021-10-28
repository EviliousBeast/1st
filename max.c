#include <stdio.h>

void main()
{
    int arr[50], n, i, max;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter the elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    max = arr[0];
    for (i = 0; i <= n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }

    printf("The max element of the array is: %d", max);
}
