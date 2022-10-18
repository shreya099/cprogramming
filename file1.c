#include<stdio.h>
int main()
{
FILE *fp;

fp=fopen("/home/shreya/ex1.txt","w+");
fputs("heyyy",fp);

printf("hello");
fclose( fp);

return 0;

}
