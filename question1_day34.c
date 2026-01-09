//Find the second largest element in an array.//

#include <stdio.h>

int main()
{
    int arr[100];
    int n, i;
    int largest, secondLargest;

    // Read number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Read array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Assume first two elements
    largest = arr[0];
    secondLargest = arr[0];

    // Find largest and second largest
    for(i = 0; i < n; i++)
    {
        if(arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        else if(arr[i] > secondLargest && arr[i] != largest)
        {
            secondLargest = arr[i];
        }
    }

    // Print result
    printf("Second largest element is: %d", secondLargest);

    return 0;
}

