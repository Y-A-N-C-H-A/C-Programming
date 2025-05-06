#include <stdio.h>
#include <stdbool.h>
#define SIZE 5

void SelectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min = i;  // Початкове значення для мінімуму
        int max = i;  // Початкове значення для максимуму

        // Шукаємо мінімум і максимум у підмасиві
        for (int j = i + 1; j < n; j++)  
        {
            if (arr[min] > arr[j])  // Якщо знайшли менший елемент
            {
                min = j;  // Оновлюємо індекс мінімуму
            }
            if (arr[max] < arr[j])  // Якщо знайшли більший елемент
            {
                max = j;  // Оновлюємо індекс максимуму
            }
        }

        // Міняємо мінімум на поточну позицію
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;

        // Якщо максимум був на місці мінімуму, потрібно змінити його індекс
        if (max == i) {
            max = min;  // Оновлюємо max, щоб він не залишився на місці мінімуму
        }

        // Міняємо максимум на останнє місце
        int tempMax = arr[n - 1];
        arr[n - 1] = arr[max];
        arr[max] = tempMax;
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

    // Sort the array using selection sort
    SelectionSort(my_array, SIZE);

    // Print the sorted array
    printf("Sorted array: ");
    for (int i = 0; i < SIZE; i++)
    {
        printf(" %d ", my_array[i]);
    }
    printf("\n");

    return 0;  // Return 0 to indicate successful execution
}
