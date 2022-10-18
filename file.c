#include<stdio.h>
int main()
{
FILE *fp;
char buff[255];
fp=fopen("/home/shreya/ex1.txt","r");
fgets(buff,255,(FILE*)fp);
printf("1: %s\n",buff);
fgets(buff,255,(FILE*)fp);
printf("2: %s\n",buff);
fgets(buff,255,(FILE*)fp);
printf("3: %s\n",buff);


fclose( fp);

return 0;

}
