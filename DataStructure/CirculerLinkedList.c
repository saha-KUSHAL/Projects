#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

// Prototypes
void displayNodes(Node *);
Node *addAtBeginning(Node *, int);
void addAtMedate(Node *,int,int);

int main()
{
    Node *head = (Node *)malloc(sizeof(Node));
    head->data = 56;
    head->next = head;
    printf("Initialization:\n");
    displayNodes(head);
    head = addAtBeginning(head,45);
    printf("\nAfter Adding a new Node at beginnning\n");
    displayNodes(head);
    addAtMedate(head,89,3);
    printf("\nAfter adding Node at position 3 :\n");
    displayNodes(head);
    return 0;
}

void displayNodes(Node *head)
{
    Node *temp = head;
    if (head == NULL)
        printf("\nCirculer Linked List is Empty !");
    else
    {
        do
        {
            printf("%d ", temp->data);
            temp = temp->next;
        } while (head != temp);
    }
}

Node *addAtBeginning(Node *head, int data)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = head;
    head->next = newNode;
    head = newNode;
    return head;
}

void addAtMedate(Node *head,int data,int position){
    Node * temp=NULL, *newNode=NULL;
    newNode=(Node *)malloc(sizeof(Node));
    newNode->data=data;
    newNode->next=NULL;
    temp=head;
    while(position>2){
        temp=temp->next;
        position--;
    }
    newNode->next=temp->next;
    temp->next=newNode;
}