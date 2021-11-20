#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};
struct Node* head; //global variable

void Insert(int data) // insert at the end of the list
{
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = data;
    temp->next = NULL;
    if (head != NULL) temp->next = head;
    head = temp;
}
void Print() //Print all the elements
{
    struct Node* temp = head;
    printf("List is: ");
    while (temp != NULL)
    {
        printf(" %d", temp->data);
        temp = temp->next;
    }
    printf("\n");
}
void Delete(int n) // Delete node at position n
{
    struct Node* temp1 = head;
    if (n == 1)
    {
        head = temp1->next;
        free(temp1);
        return;
    }
    int i;
    for (i = 0; i < n - 2; i++)
        temp1 = temp1->next;
    //temp1 points to (n-1)th Node
    struct Node* temp2 = temp1->next;//nth Node
    temp1->next = temp2->next; //(n+1)th Node

    free(temp2); // free the space in temp2
}
int main()
{
    head = NULL; // empty list
    Insert(2);
    Insert(3);
    Insert(4);
    Insert(5);
    Print();
    int n;
    printf("Enter a position: \n"); scanf("%d", &n);
    Delete(n);
    Print();
}