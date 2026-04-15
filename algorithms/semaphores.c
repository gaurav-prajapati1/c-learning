#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int buffer[SIZE];
int in = 0, out = 0, count = 0;

// Producer function
void produce(int item) {
    if(count == SIZE) {
        printf("Buffer is full!\n");
        return;
    }

    buffer[in] = item;
    printf("Produced: %d at %d\n", item, in);
    in = (in + 1) % SIZE;
    count++;
}

// Consumer function
void consume() {
    if(count == 0) {
        printf("Buffer is empty!\n");
        return;
    }

    int item = buffer[out];
    printf("Consumed: %d from %d\n", item, out);
    out = (out + 1) % SIZE;
    count--;
}

int main() {
    int choice, item;

    while(1) {
        printf("\n1. Produce\n2. Consume\n3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter item: ");
                scanf("%d", &item);
                produce(item);
                break;

            case 2:
                consume();
                break;

            case 3:
                exit(0);

            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}