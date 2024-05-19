#include<stdio.h>

struct student
{
	int roll;
	char name[50];
}//s,s1;

main()
{
struct student s,s1,s2;
printf("1st Enter the roll & name\n");
scanf("%d%s",&s.roll,&s.name);
printf("2nd Enter the roll & name\n");
scanf("%d%s",&s1.roll,&s1.name);
printf("3rd Enter roll and name\n");
scanf("%d%s",&s2.roll,&s2.name);
printf("after displaying\n");
printf("Roll=%d Name=%s\n",s.roll,s.name);
printf("Roll=%d Name=%s",s1.roll,s1.name);
printf("Roll=%d Name=%s",s2.roll,s2.name);
}
