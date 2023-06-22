#include <stdio.h>
#include <stdlib.h>
// declaring structure
typedef struct Node {
    Node* prev;
    int data;
    Node* next;
} Node;

//  Prototypes
void addAtBeginning(Node**, int);
void displayNodes(Node*);

int main()
{
    Node* head = (Node*)malloc(sizeof(Node));
    head->prev = NULL;
    head->data = 0;
    head->next = NULL;
    addAtBeginning(&head, 45);
    displayNodes(head);
}

// Body of the Function
void addAtBeginning(Node** head, int data)
{
    Node newNode = (Node*)malloc(sizeof(Node));
    newNode->prev = NULL;
    newNode->data = data;
    newNode->next = *head;
    *head->prev = newNode;
    *head = newNode;
}

void displayNodes(Node* head)
{
    while (head->next != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
}
