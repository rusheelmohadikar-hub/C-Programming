#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node
struct Node {
    int data;            // Data part of the node
    struct Node* next;   // Pointer to the next node
};

int main() {
    // Create individual nodes
    struct Node* head = (struct Node*)malloc(sizeof(struct Node));  // First node (head)
    struct Node* second = (struct Node*)malloc(sizeof(struct Node)); // Second node
    struct Node* third = (struct Node*)malloc(sizeof(struct Node));  // Third node
    struct Node* fourth = (struct Node*)malloc(sizeof(struct Node)); // Fourth node

    // Assign data to the nodes
    head->data = 10;    // Assign data to the first node
    second->data = 20;  // Assign data to the second node
    third->data = 30;   // Assign data to the third node
    fourth->data = 40;  // Assign data to the fourth node

    // Link the nodes together
    head->next = second;    // First node points to the second node
    second->next = third;   // Second node points to the third node
    third->next = fourth;   // Third node points to the fourth node
    fourth->next = NULL;    // Fourth node points to NULL (end of the list)

    // Start from the head and traverse the list
    struct Node* current = head;  // Initialize the current node to head

    // Traverse the list until the current node is NULL
    while (current != NULL) {
        printf("%d -> ", current->data);  // Print the data of the current node
        current = current->next;          // Move to the next node
    }

    // After traversing, print "NULL" to indicate the end of the list
    printf("NULL\n");

    return 0;
}
