#include<stdio.h>
#include<string.h>
int main()
{
char x[]="shreyajain";
printf("%c ",*x);
printf("%c ",*(x+1));
printf("%c ",*(x+7));
char *y;
y=x;
printf("%c ",*y);
printf("%c ",*(y+1));
printf("%c ",*(y+7));
return 0;
}
