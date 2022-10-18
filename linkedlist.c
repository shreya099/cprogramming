#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node * next;
}*head=NULL,*last=NULL;
void insertatend(int n)
{
struct node* s=(struct node*)malloc(sizeof(struct node));
s->data=n;
s->next=NULL;
if(head==NULL){
head=s;
last=s;
return;
}
last->next=s;
last=s;
}
void print()
{
struct node* temp=head;
while(temp!=NULL)
{

printf("%d",temp->data);
temp=temp->next;
}
}
void insertmiddle(int n,int d)
{
struct node* s=(struct node*)malloc(sizeof(struct node));
s->data=n;
s->next=NULL;


}
void delet
int main()
{

for(int i=0;i<5;i++)
insertatend(i);
print();
deleteatend();
return 0;
}
