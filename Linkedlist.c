#include <stdio.h>
#include <stdlib.h>

// Define a structure for a node in the linked list
struct Node {
    int data;
    struct Node *next;
};

int main() {
    // Create head of the linked list
    struct Node *head = NULL;
    struct Node *newNode;
    struct Node *temp;
    int choice, value;

    while (1) {
        // Display menu
        printf("\n1. Insert at beginning\n2. Insert at end\n3. Delete node\n4. Display list\n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                // Insert at beginning
                printf("Enter the value to insert at beginning: ");
                scanf("%d", &value);
                newNode = (struct Node*) malloc(sizeof(struct Node));
                newNode->data = value;
                newNode->next = head; // Point to current head (which might be NULL)
                head = newNode; // Update head to new node
                break;

            case 2:
                // Insert at end
                printf("Enter the value to insert at end: ");
                scanf("%d", &value);
                newNode = (struct Node*) malloc(sizeof(struct Node));
                newNode->data = value;
                newNode->next = NULL; // This will be the last node
                if (head == NULL) {
                    head = newNode; // If the list is empty, make this node the head
                } else {
                    temp = head;
                    while (temp->next != NULL) {
                        temp = temp->next; // Move to the last node
                    }
                    temp->next = newNode; // Attach the new node at the end
                }
                break;

            case 3:
                // Delete a node
                printf("Enter the value to delete: ");
                scanf("%d", &value);
                temp = head;
                struct Node *prev = NULL;

                // Case 1: If the node to delete is the head
                if (temp != NULL && temp->data == value) {
                    head = temp->next; // Update head
                    free(temp); // Free the memory
                    printf("Node with value %d deleted.\n", value);
                } else {
                    // Case 2: Traverse to find the node to delete
                    while (temp != NULL && temp->data != value) {
                        prev = temp;
                        temp = temp->next;
                    }

                    // If node with value not found
                    if (temp == NULL) {
                        printf("Node with value %d not found.\n", value);
                    } else {
                        // Unlink the node and free memory
                        prev->next = temp->next;
                        free(temp);
                        printf("Node with value %d deleted.\n", value);
                    }
                }
                break;

            case 4:
                // Print the linked list
                printf("Linked List: ");
                temp = head;
                while (temp != NULL) {
                    printf("%d -> ", temp->data);
                    temp = temp->next;
                }
                printf("NULL\n");
                break;

            case 5:
                // Exit the program
                exit(0);

            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}

