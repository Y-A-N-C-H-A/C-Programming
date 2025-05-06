/*******************************************************************************
 * Program: Quick Sort
 * 
 * Quick Sort algorithm:
 * - Pick a pivot element and partition the array around it.
 * - Recursively sort sub-arrays to the left and right of the pivot.
 *
 * Time Complexity:
 * - Best/Average: O(n log n)
 * - Worst: O(n^2)
 *
 * Space Complexity:
 * - Average: O(log n) due to recursion stack
 * - Worst: O(n) for recursion stack in worst case
 ******************************************************************************/

 #include <stdio.h>

 // Swaps two integers
 void swap(int *x, int *y);
 
 // Sorts an array using the Quick Sort algorithm
 void quick_sort(int a[], int length);
 
 // Recursively sorts sub-arrays using Quick Sort
 void quick_sort_recursion(int a[], int l, int h);
 
 // Partitions the array around the pivot and returns the pivot index
 int partition(int a[], int l, int h);
 
 int main()
 {
     // Test array and its length
     int array[] = {9, 4, 8, 1, 7, 0, 3, 2, 5, 6};
     int length = 10;
 
     // Print the original array
     for (int i = 0; i < length; i++)
         printf("%d ", array[i]);
     printf("\n");
 
     // Sort the array using quick sort
     quick_sort(array, length);
 
     // Print the sorted array to verify the sorting
     for (int i = 0; i < length; i++)
         printf("%d ", array[i]);
     printf("\n");
 
     return 0;
 }
 
 // Swaps the values of x and y
 void swap(int *x, int *y)
 {
     int temp = *x;
     *x = *y;
     *y = temp;
 }
 
 // Wrapper function to initiate the quick sort
 void quick_sort(int a[], int length)
 {
     quick_sort_recursion(a, 0, length - 1);
 }
 
 // Recursively sorts the sub-array from index 'l' to 'h'
 void quick_sort_recursion(int a[], int l, int h)
 {
     if (l < h)
     {
         // Partition the array and get the pivot index
         int pivot_index = partition(a, l, h);
 
         // Recursively sort the left and right sub-arrays
         quick_sort_recursion(a, l, pivot_index - 1); // Left sub-array
         quick_sort_recursion(a, pivot_index + 1, h); // Right sub-array
     }
 }
 
 // Partitions the array and returns the pivot index
 int partition(int a[], int l, int h)
 {
     // Choose the last element as the pivot
     int pivot_value = a[h];
 
     // Pointer to track the boundary for elements smaller than pivot
     int i = l;
 
     // Traverse through the array and partition based on pivot value
     for (int j = l; j < h; j++)
     {
         // If the current element is smaller than or equal to the pivot, swap
         if (a[j] <= pivot_value)
         {
             swap(&a[j], &a[i]); // Swap elements at j and i
             i++; // Increment the boundary for smaller elements
         }
     }
 
     // Finally, place the pivot in its correct position
     swap(&a[i], &a[h]);
 
     // Return the index of the pivot
     return i; 
 }
 