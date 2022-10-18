#include<stdio.h>
void swapp(int *a,int *b)
{
int t=*a;
*a=*b;
*b=t;
}
int main()
{
int x=10,y=20,*p1,*p2;

p1=&x,p2=&y;
printf("before swap x=%d and y=%d ",x,y);
swapp(&x,&y);
printf("after swap x=%d and y=%d",x,y);
return 0;
}

