#include<stdio.h>
int fun()
{
static int x=0;
x++;
return x;
}
int main()
{
printf("%d",fun());
printf("%d",fun());
return 0;
}
