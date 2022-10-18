#include<stdio.h>
#include<string.h>
int main()
{
char x[19]="shreya jain is a";
char y[39]="is a";
char *k=strstr(x,y);
if(k)
printf("%s",k);
return 0;
}
