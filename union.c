#include<stdio.h>
union test{
int x;
char y;
}u;
struct test1{
int y;
char x;
}s;
int main()
	{
printf("%lu",sizeof(u));
printf("%lu",sizeof(s));
return 0;
}
