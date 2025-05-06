#include <stdio.h>

void merge_sort(int a[], int length);
void merge_sort_recursion(int a[], int l, int r);
void merge_sorted_arrays(int a[], int l, int m, int r);

int main()
{
    // test array and length
    int array[] = {9, 4, 8, 1, 7, 0, 3, 2, 5, 6};
    int length = 10;

    for (int i = 0; i < length; i++)
        printf("%d ", array[i]);
    printf("\n");

    // sort the array using merge sort
    merge_sort(array, length);

    // print out the array elements to verify they have been sorted
    for (int i = 0; i < length; i++)
        printf("%d ", array[i]);
    printf("\n");

    return 0;
}
void merge_sort(int a[], int length){
    merge_sort_recursion(a, 0, length - 1);
}
void merge_sort_recursion(int a[], int l, int r)
{
    if (l < r)
    {
        int mid = l + (r - l) / 2;

        merge_sort_recursion(a, l, mid);
        merge_sort_recursion(a, mid + 1, r);

        merge_sorted_arrays(a, l, mid, r);
    }
}
void merge_sorted_arrays(int a[], int l, int m, int r)
{
    int leftLength = m - l + 1;
    int rightLength = r - m;

    int tempLeft[leftLength];
    int tempRight[rightLength];

    for (int i = 0; i < leftLength; i++)
    {
        tempLeft[i] = a[l+i];
    }
    for (int j = 0; j < rightLength; j++)
    {
        tempRight[j] = a[m+j+1];
    }
    
    int i = 0, j = 0, k;

    for ( k = l; k <= r; k++)
    {
        if(i < leftLength && (j >= rightLength || tempLeft[i] <= tempRight[j]))
        {
            a[k] = tempLeft[i];
            i++;
        }
        else
        {
            a[k] = tempRight[j];
            j++;
        }
    }
}