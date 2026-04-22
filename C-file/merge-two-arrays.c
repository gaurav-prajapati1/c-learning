#include <stdio.h>

int main() {
    int n1, n2, n3, i, j;

    // 1. Input for first array
    printf("Enter number of elements in first array: ");
    if (scanf("%d", &n1) != 1) return 1; 

    int arr1[n1];
    printf("Enter %d elements: ", n1);
    for (i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    // 2. Input for second array (THIS WAS MISSING)
    printf("Enter number of elements in second array: ");
    if (scanf("%d", &n2) != 1) return 1;

    int arr2[n2];
    printf("Enter %d elements: ", n2);
    for (i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    // 3. Size of the merged array
    n3 = n1 + n2;
    int merged[n3];

    // 4. Copy elements of first array
    for (i = 0; i < n1; i++) {
        merged[i] = arr1[i];
    }

    // 5. Copy elements of second array
    // Note: 'i' is currently equal to n1, so we continue from there
    for (j = 0; j < n2; j++) {
        merged[i] = arr2[j];
        i++;
    }

    // 6. Printing the final merged array
    printf("\nThe merged array is: ");
    for (i = 0; i < n3; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");

    return 0;
}