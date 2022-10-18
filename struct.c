#include<stdio.h>
struct shreya{
char name[15];
char bday[9];

}sj;
int main()
{
printf("Hellooo!");
printf("please enter your name ");
scanf("%s",sj.name);
printf("please enter your bday dd-mm-yyyy ");
scanf("%s",sj.bday);

printf("%s's bday is on %s",sj.name,sj.bday);
}
