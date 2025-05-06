#include <stdio.h>
#define SIZE 5
#include <stdbool.h>
// Bubble Sort in C
// Function to perform Bubble Sort
// Time Complexity: O(n^2)
// Space Complexity: O(1)
// Best Case: O(n) when the array is already sorted
// Worst Case: O(n^2) when the array is sorted in reverse order
// Average Case: O(n^2) when the array is unsorted
// Stable Sort: Yes
// In-place Sort: Yes
// Algorithm:
// 1. Start from the first element of the array.
// 2. Compare the current element with the next element.
// 3. If the current element is greater than the next element, swap them.
// 4. Move to the next element and repeat the process until the end of the array.
// 5. Repeat the process for n-1 passes, where n is the number of elements in the array.
// 6. The largest element will "bubble up" to the end of the array after each pass.
// 7. The process is repeated until the array is sorted.

// 11. The algorithm can be optimized by adding a flag to check if any swaps were made in the current pass.
// 12. If no swaps were made, the array is already sorted and the algorithm can terminate early.
void BubbleSort(int arr[], int n)
{
    int i, j, temp;
    bool swapped = false;

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0 ; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true;
            }
        }
        if (swapped = false)
        {
            break;
        }
    }
}
int main()
{
    // Initialize all elements of the array
    // Array initialized with fixed values for demonstration purposes
    int my_array[SIZE] = {5, -3, 7, 5, -1};
    // Print the original array
    printf("Original array: ");
    for (int i = 0; i < SIZE; i++)
    {
        printf(" %d ", my_array[i]);
    }

    BubbleSort(my_array, SIZE);
    printf("\nSorted array: ");
    for (int i = 0; i < SIZE; i++)
    {
        printf(" %d ", my_array[i]);
    }
    return 0;
}
