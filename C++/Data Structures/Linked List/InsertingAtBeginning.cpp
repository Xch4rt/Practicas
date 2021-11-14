#include <stdlib.h>
#include <stdio.h> 

struct Node{
    int data;
    struct Node* next;
};

void Insert(Node** poninterToHead, int x)
{
    struct Node* temp = (Node*)malloc(sizeof(struct Node));
    temp->data = x;
    temp->next = NULL;

    if (*poninterToHead != NULL) temp->next = *poninterToHead;

    *poninterToHead = temp;

}
void Print(Node* head)
{
    printf("List is: ");
    while (head != NULL)
    {
        printf(" %d", head->data);
        head = head->next;
    }
    printf("\n");
}
int main()
{
    Node* head = NULL;
    printf("How many numbers?: \n");
    int n,i,x;
    scanf("%d",&n);

    for (i = 0; i < n; i++)
    {
        printf("Enter the number[%d]: \n",i);
        scanf("%d",&x);

        Insert(&head, x);
        Print(head);
    }
}