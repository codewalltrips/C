#include<stdio.h>
 struct student
 {
 	int roll;
 	char name[50];
 	float marks;
 }
 main()
 {
 	struct student s,s1,s2;
 	printf("Enter roll name and marks respectively");
 	scanf("%d%s%f",&s.roll,&s.name,&s.marks);
 	scanf("%d%s%f",&s1.roll,&s1.name,&s1.marks);
 	scanf("%d%s%f",&s2.roll,&s2.name,&s2.marks);
 	printf("Display\n");
 	printf("\nRoll=%d Name=%s Marks=%f",s.roll,s.name,s.marks);
 	printf("\nRoll=%d Name=%s Marks=%f",s1.roll,s1.name,s1.marks);
 	printf("\nRoll=%d Name=%s Marks=%f",s2.roll,s2.name,s2.marks);
 }
