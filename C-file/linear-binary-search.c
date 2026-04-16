#include <stdio.h>

// --- SEARCH LOGIC ---

// Linear Search: Checks every element one by one
int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) return i;
    }
    return -1;
}

// Binary Search: Splits the array in half repeatedly
int binarySearch(int arr[], int low, int high, int target) {
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) return mid;
        if (arr[mid] < target) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}

// --- EXECUTION ---

int main() {
    // Hardcoded sorted array
    int data[] = {10, 22, 35, 40, 45, 50, 80, 90};
    int n = sizeof(data) / sizeof(data[0]);
    
    // Hardcoded target to find
    int target = 50;

    printf("Array Elements: ");
    for(int i = 0; i < n; i++) printf("%d ", data[i]);
    printf("\nTarget Value: %d\n", target);
    printf("----------------------------------\n");

    // 1. Execute Linear Search
    int lsResult = linearSearch(data, n, target);
    if (lsResult != -1)
        printf("Linear Search: Found at index %d\n", lsResult);
    else
        printf("Linear Search: Element not found\n");

    // 2. Execute Binary Search
    int bsResult = binarySearch(data, 0, n - 1, target);
    if (bsResult != -1)
        printf("Binary Search: Found at index %d\n", bsResult);
    else
        printf("Binary Search: Element not found\n");

    return 0;
}