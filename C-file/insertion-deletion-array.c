#include <stdio.h>

void display(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[100] = {10, 20, 30, 40, 50};
    int size = 5; // Current number of elements
    int element, pos, i;

    printf("Original array: ");
    display(arr, size);

    // --- INSERTION OPERATION ---
    element = 25; // Value to insert
    pos = 2;      // Index where we want to insert (0-based)

    // Shift elements to the right
    for (i = size - 1; i >= pos; i--) {
        arr[i + 1] = arr[i];
    }
    arr[pos] = element;
    size++;

    printf("After insertion of %d at index %d: ", element, pos);
    display(arr, size);

    // --- DELETION OPERATION ---
    pos = 1; // Index to delete (deleting 20)

    // Shift elements to the left
    for (i = pos; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    size--;

    printf("After deletion at index %d: ", pos);
    display(arr, size);

    return 0;
}