#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}node;

node *createnode(int val){
    node *newnode = (node*)malloc(sizeof(node));
    if(newnode == NULL){
        perror("MEM ALLO FAILED");
        exit(1);
    }
    newnode->data = val;
    newnode ->next = NULL;
    return newnode;
}

node insertatbeg(node** head,int val){
    node *newnode = createnode(val);
    if(*head == NULL){
        *head = newnode;
        return;
    }
    node *temp = *head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newnode;
}

void insertAtEnd(node** head, int value) {
    node* newNode = createnode(value);
    if (*head == NULL) {    // If list is empty
        *head = newNode;
        return;
    }
    node* temp = *head;
    while (temp->next != NULL) {  // Traverse to the last node
        temp = temp->next;
    }
    temp->next = newNode;  // Link last node to new one
}

void insertAtPosition(node** head, int value, int position) {
    if (position < 1) {
        printf("Invalid position\n");
        return;
    }
    node* newNode = createNode(value);
    if (position == 1) {
        newNode->next = *head;
        *head = newNode;
        return;
    }
    node* temp = *head;
    for (int i = 1; i < position - 1 && temp != NULL; i++) {
        temp = temp->next;
    }
    if (temp == NULL) {
        printf("Position out of bounds\n");
        free(newNode);  // Don't leak memory
        return;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}

void deleteByValue(node** head, int value) {
    if (*head == NULL) {
        printf("List is empty\n");
        return;
    }
    node* temp = *head;
    node* prev = NULL;
    if (temp->data == value) {  // If head is the target
        *head = temp->next;
        free(temp);
        return;
    }
    while (temp != NULL && temp->data != value) {
        prev = temp;
        temp = temp->next;
    }
    if (temp == NULL) {
        printf("Value not found\n");
        return;
    }
    prev->next = temp->next;  // Unlink the node
    free(temp);               // Free memory
}

void printList(node* head) {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }
    node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

void freeList(node** head) {
    node* current = *head;
    node* nextNode;
    while (current != NULL) {
        nextNode = current->next;
        free(current);
        current = nextNode;
    }
    *head = NULL;
}



// (Copy the Node struct and all functions from above here)

int main() {
    node* head = NULL;  // Start with an empty list

    // Insert some nodes
    insertAtBeginning(&head, 5);
    insertAtEnd(&head, 10);
    insertAtEnd(&head, 15);
    insertAtPosition(&head, 12, 3);  // Insert 12 at position 3

    printf("List after insertions: ");
    printList(head);  // Output: 5 -> 10 -> 12 -> 15 -> NULL

    // Delete a node
    deleteByValue(&head, 10);
    printf("List after deleting 10: ");
    printList(head);  // Output: 5 -> 12 -> 15 -> NULL

    // Clean up memory
    freeList(&head);

    return 0;
}