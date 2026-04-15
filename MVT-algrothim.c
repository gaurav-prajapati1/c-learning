#include <stdio.h>

int main() {
    int n, m;

    printf("Enter number of memory partitions: ");
    scanf("%d", &n);

    int partitionSize[n], partitionAllocated[n];
    for(int i = 0; i < n; i++) {
        printf("Enter size of Partition %d: ", i);
        scanf("%d", &partitionSize[i]);
        partitionAllocated[i] = 0; // 0 = free, 1 = allocated
    }

    printf("Enter number of processes: ");
    scanf("%d", &m);

    int processSize[m], allocation[m];
    for(int i = 0; i < m; i++) {
        printf("Enter size of Process %d: ", i);
        scanf("%d", &processSize[i]);
        allocation[i] = -1; // -1 = not allocated
    }

    // MVT Allocation (First Fit)
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            if(!partitionAllocated[j] && partitionSize[j] >= processSize[i]) {
                allocation[i] = j;
                partitionAllocated[j] = 1; // mark partition allocated
                break; // first fit
            }
        }
    }

    // Output Allocation Table
    printf("\nProcess No.\tProcess Size\tPartition Allocated\n");
    for(int i = 0; i < m; i++) {
        printf("%d\t\t%d\t\t", i, processSize[i]);
        if(allocation[i] != -1)
            printf("%d\n", allocation[i]);
        else
            printf("Not Allocated\n");
    }

    return 0;
}