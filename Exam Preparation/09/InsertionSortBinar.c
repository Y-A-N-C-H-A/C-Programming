#include <stdio.h>
#include <stdbool.h>

#define SIZE 5

// Бінарний пошук для знаходження індексу вставки
int binarySearch(int arr[], int key, int low, int high) {
    while (low <= high) {
        int mid = low + (high - low) / 2;
        
        if (arr[mid] == key)
            return mid + 1;
        if (arr[mid] > key)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return low;
}

// Покращений Insertion Sort з бінарним пошуком
void InsertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        // Знайдемо правильну позицію для key за допомогою бінарного пошуку
        int pos = binarySearch(arr, key, 0, j);

        // Якщо позиція змінилася, переміщаємо елементи вправо, щоб звільнити місце
        while (j >= pos) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int my_array[SIZE] = {5, -3, 7, 2, -1};

    // Print the original array before sorting
    printf("Original array: ");
    for (int i = 0; i < SIZE; i++) {
        printf(" %d ", my_array[i]);
    }
    printf("\n");

    // Sort the array using insertion sort
    InsertionSort(my_array, SIZE);

    // Print the sorted array
    printf("Sorted array: ");
    for (int i = 0; i < SIZE; i++) {
        printf(" %d ", my_array[i]);
    }
    printf("\n");

    return 0;  // Return 0 to indicate successful execution
}
