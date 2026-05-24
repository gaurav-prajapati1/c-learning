#include<stdio.h>
 // Functon to perform bubble sort

 void BubbleSort(int arr[], int n){
    for(int i = 0; i < n -1; i++){
        for(int j = 0; j < n - i -1; j++ ){
            if(arr[j]> arr[j+1]){
                //Swap to step 
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j + 1] = temp;
            }
        }
    }
 }

 // Function to print the array;

 void printArray(int arr[], int n ){
    for (int i = 0; i < n; i++)
    printf("%d ", arr[i]);
        printf("\n");
 }


 int main (){
    int arr[]  = {62,25,12,22,11};
    // printf("Enter the arr[] for sorting using Bubble sort");
    // scanf("%d",&arr[]);
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Original Array: ");
    printArray(arr,n);
    BubbleSort(arr,n);
    printf("Sorted Array");
    printArray(arr,n);
    return 0;
 }