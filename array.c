
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
}*head=NULL;

void push(int new_data)
{
 
    struct Node* new_node
        = (struct Node*)malloc(sizeof(struct Node));
 
   
    new_node->data = new_data;
 
    new_node->next = head;
    new_node->prev = NULL;
 
   
    if ((head) != NULL)
        (head)->prev = new_node;
 
   
    (head) = new_node;
}
 



void printList()
{
    struct Node* last;
    printf("\nTraversal in forward direction \n");
    while (head != NULL) {
        printf(" %d ", head->data);
        last = head;
        head = head->next;
    }
 
    printf("\nTraversal in reverse direction \n");
    while (last != NULL) {
        printf(" %d ", last->data);
        last = last->prev;
    }
}
 
// Driver code
int main()
{
  
 
   
    push(7);
 
    
    push(1);
    push(1);
  
 
 
    printf("Created DLL is: ");
    printList();

    return 0;
}
