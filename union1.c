#include<stdio.h>
union test{
int x;
char y;
}u;

int main()
	{
	u.x=9;
	
	
printf("%lu\n",sizeof(u));
printf("%d\n ",u.x);
u.y='a';
printf("%c \n",u.y);
printf("%c\n ",u.x);
return 0;
}
