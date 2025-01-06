#include <stdio.h>

int q[5], i, item, size, front = -1, rear = -1;

void enqueue(int item) {
    if (rear == size - 1) {
        printf("Queue is full\n");
    } else {
        if (rear == -1) {
            front = 0;
            rear = 0;
            q[rear] = item;
        } else {
            rear = rear + 1;
            q[rear] = item;
        }
    }
}

void dequeue() {
    if ((front == -1) && (rear == -1)) {
        printf("Queue is empty\n");
    } else {
        item = q[front];
        printf("Deleted item is %d\n", q[front]);
        if (front == rear) {
            front = -1;
            rear = -1;
        } else {
            front = front + 1;
        }
    }
}

void display() {
    if (front == -1) {
        printf("Queue is empty\n");
    } else {
        printf("Queue elements are: ");
        for (i = front; i <= rear; i++) {
            printf("%d ", q[i]);
        }
        printf("\n");
    }
}

int main() {
    int choice;

    printf("Enter the size of the queue: ");
    scanf("%d", &size);

    do {
        printf("\nEnter the choice:\n");
        printf("1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the item to be inserted: ");
                scanf("%d", &item);
                enqueue(item);
                break;

            case 2:
                dequeue();
                break;

            case 3:
                display();
                break;

            case 4:
                printf("Exiting program.\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }

    } while (choice != 4);  // Exit when user chooses 4

    return 0;
}
