#include<stdio.h>
#include<string.h>
void display(char y[])
{
puts(y);
}
int main()
{
char x[19];
printf("enter ");
fgets(x,sizeof(x),stdin);
//puts(x);
display(x);
return 0;
}

