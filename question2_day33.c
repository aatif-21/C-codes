//Delete an element from an array.//

#include <stdio.h>

int main()
{
    int arr[100];
    int n, i, position;

    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position to delete (1 to %d): ", n);
    scanf("%d", &position);

    for(i = position - 1; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    n--; 

    printf("Array after deletion:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

