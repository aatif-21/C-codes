//ount positive, negative, and zero elements in an array

#include <stdio.h>

int main() {
    int n, i;
    printf("Enter the number of elemets in the array:");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int positive_count = 0;
    int negative_count = 0;
    int zero_count = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            negative_count++;
        }
        else if (arr[i] > 0)
        {
            positive_count++;
        }
        else
        {
            zero_count++;
        }
    }

    printf("Positive elements: %d\n", positive_count);
    printf("Negative elements: %d\n", negative_count);
    printf("Zero elements: %d\n", zero_count);

    return 0;
}