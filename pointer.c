#include<stdio.h>
int main()
{
int *x,y=9,**z;
x=&y;
z=&x;
printf("%p\n",&y);
printf(" value of  y is %d ",y);
printf("%p\n",&y);
printf("value of  y is  %d ",*x);
printf("%p\n",&z);
printf("value of  y is %d ",**z);
return 0;
}

