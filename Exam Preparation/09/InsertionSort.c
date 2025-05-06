#include <stdio.h>
#include <stdbool.h>
#define SIZE 5

void InsertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j+1] = arr[j];

            j = j - 1;
        }
        arr[j+1] = key;
        
    }
}

int main()
{
    int my_array[SIZE] = {5, -3, 7, 2, -1};

    // Print the original array before sorting
    printf("Original array: ");
    for (int i = 0; i < SIZE; i++)
    {
        printf(" %d ", my_array[i]);
    }
    printf("\n");

    // Sort the array using insertion sort
    InsertionSort(my_array, SIZE);

    // Print the sorted array
    printf("Sorted array: ");
    for (int i = 0; i < SIZE; i++)
    {
        printf(" %d ", my_array[i]);
    }
    printf("\n");

    return 0;  // Return 0 to indicate successful execution
}
