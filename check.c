#include <stdio.h>
#include <math.h>

int main() {
    int logical_address, page_number, offset;
    int page_size, num_pages, frame_number;
    int page_table[10]; // Simple page table

    printf("Enter number of pages: ");
    scanf("%d", &num_pages);

    printf("Enter page size (in words): ");
    scanf("%d", &page_size);

    // Input frame number for each page
    printf("Enter frame number for each page:\n");
    for(int i = 0; i < num_pages; i++) {
        printf("Page %d -> Frame #: ", i);
        scanf("%d", &page_table[i]);
    }

    printf("\nEnter logical address to access: ");
    scanf("%d", &logical_address);

    // Calculate page number and offset
    page_number = logical_address / page_size;
    offset = logical_address % page_size;

    if(page_number >= num_pages) {
        printf("Invalid logical address!\n");
        return 1;
    }

    // Physical address = frame_number * page_size + offset
    frame_number = page_table[page_number];
    int physical_address = frame_number * page_size + offset;

    printf("\nLogical Address: %d\n", logical_address);
    printf("Page Number: %d\n", page_number);
    printf("Offset: %d\n", offset);
    printf("Physical Address: %d\n", physical_address);

    return 0;
}