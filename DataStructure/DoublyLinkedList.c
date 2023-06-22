#include <stdio.h>
#include <stdlib.h>
// declaring structure
typedef struct Node
{
    struct Node *prev;
    int data;
    struct Node *next;
} Node;

//  Prototypes
void displayNodes(Node *);

void addAtBeginning(Node **, int);
void addAtEnd(Node *, int);
void addAtPosition(Node *, int, int);

void deleteFirst(Node **);
void deleteLast(Node *);
void deleteMediate(Node *, int);

int main()
{
    Node *head = (Node *)malloc(sizeof(Node));
    head->prev = NULL;
    head->data = 0;
    head->next = NULL;
    addAtBeginning(&head, 45);
    addAtEnd(head, 65);
    displayNodes(head);
    addAtPosition(head, 75, 3);
    printf("\nAfter adding the node in the 3rd positon:\n");
    displayNodes(head);
    deleteMediate(head, 2);
    printf("\nAfter deleteing Node 2:\n");
    displayNodes(head);
}

// Body of the Function
void addAtBeginning(Node **head, int data)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->prev = NULL;
    newNode->data = data;
    newNode->next = *head;
    (*head)->prev = newNode;
    *head = newNode;
}

void displayNodes(Node *head)
{
    while (head != NULL)
    {
        printf("%d -> ", head->data);
        head = head->next;
    }
}

void addAtEnd(Node *head, int data)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    Node *temp;
    temp = head;
    while (temp->next != NULL)
        temp = temp->next;
    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = temp;
    temp->next = newNode;
    temp = NULL;
}

void addAtPosition(Node *head, int data, int position)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    Node *temp;
    temp = head;
    if (position == 1)
        printf("Choose Add At Beginning Instead");
    else
    {
        while (position > 2)
        {
            temp = temp->next;
            position--;
        }
        newNode->data = data;
        newNode->next = temp->next;
        newNode->prev = temp;
        temp->next = newNode;
        newNode->next->prev = newNode;
    }
}

void deleteFirst(Node **head)
{
    *head = (*head)->next;
    free((*head)->prev);
    (*head)->prev = NULL;
}

void deleteLast(Node *head)
{
    while (head->next != NULL)
        head = head->next;
    head->prev->next = NULL;
    free(head);
}

void deleteMediate(Node *head, int position)
{
    while (position > 1)
    {
        head = head->next;
        position--;
    }
    head->next->prev = head->prev;
    head->prev->next = head->next;
    free(head);
}
