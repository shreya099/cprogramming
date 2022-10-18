#include<stdio.h>
struct salary {
int sal;
};
struct address{
int pin;
char city[20];
char phone[14];
struct salary s;
};
struct employee{
char name[20];
struct address add;
};
void display(struct employee);
void main()
{
struct employee e;
printf("enter emp info");
scanf("%d %s %s %s %d",&e.add.pin,e.add.city,e.add.phone,e.name,&e.add.s.sal);
display(e);
}
void display(struct employee e1)
{
printf("printing the details \n");
printf("%d %s %s %s %d",e1.add.pin,e1.add.city,e1.add.phone,e1.name,e1.add.s.sal);
}
