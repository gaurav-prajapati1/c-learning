#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// --- Sorting Algorithms ---

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1]) swap(&arr[j], &arr[j + 1]);
}

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < n; j++)
            if (arr[j] < arr[min_idx]) min_idx = j;
        swap(&arr[min_idx], &arr[i]);
    }
}

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i], j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

// --- Helpers ---

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
}

// Array ko wapas purani halat mein laane ke liye
void resetArray(int target[], int source[], int n) {
    for (int i = 0; i < n; i++) target[i] = source[i];
}

int main() {
    int original[] = {64, 25, 12, 22, 11};
    int n = sizeof(original) / sizeof(original[0]);
    int workArray[n]; 
    int choice;

    while (1) {
        // Har baar naya array copy karte hain taaki pichla sort asar na kare
        resetArray(workArray, original, n);
        printf("Original Array: "); printArray(original, n);
        printf("1. Bubble Sort\n2. Selection Sort\n3. Insertion Sort\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 4) {
            printf("Exiting... Bye!\n");
            break; 
        }

        switch (choice) {
            case 1:
                bubbleSort(workArray, n);
                printf("Result (Bubble): ");
                break;
            case 2:
                selectionSort(workArray, n);
                printf("Result (Selection): ");
                break;
            case 3:
                insertionSort(workArray, n);
                printf("Result (Insertion): ");
                break;
            default:
                printf("Invalid choice! Try again.\n");
                continue;
        }
        
        printArray(workArray, n);
    }

    return 0;
}