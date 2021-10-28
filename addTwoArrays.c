#include <stdio.h>

int main()
{
    int arr1[50], arr2[50], arr3[50], n1, n2, n3, i, j;

    printf("Enter size of the 1st array: ");
    scanf("%d", &n1);

    printf("Enter the elements: ");
    for (i = 0; i < n1; i++)
        scanf("%d", &arr1[i]);

    printf("Enter size of the 2nd array: ");
    scanf("%d", &n2);

    printf("Enter the elements: ");
    for (j = 0; j < n1; j++)
        scanf("%d", &arr2[j]);

    n3 = n1 + n2;

    for (i = 0; i < n1; i++)
        arr3[i] = arr1[i];
    for (i = 0, j = n1; j < n3 && i < n2; i++, j++)
        arr3[j] = arr2[i];

    printf("After Adding: ");
    for (i = 0; i < n3; i++)
        printf("%d\t", arr3[i]);

    return 0;
}