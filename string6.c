#include<stdio.h>
#include<string.h>
int main()
{
char x[19]="shreya jain";
char y[39]="shreya jain";
char z[]="hhjjj";
int r=strcmp(x,y);

if(r==0)
printf("equals");
else
printf("not equals");
return 0;
}
