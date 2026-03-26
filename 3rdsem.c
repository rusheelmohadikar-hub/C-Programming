//To create a singly linked list
#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node
struct Node {
    int data;
    struct Node* next;
};

int main() {
    struct Node *head, *second;

    // Allocate memory for the nodes
    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));

    // Assign data to the first node and link it to the second node
    head->data = 10;  // First node data
    head->next = second;

    // Assign data to the second node and set its next pointer to NULL
    second->data = 20;  // Second node data
    second->next = NULL;

    return 0;
}
