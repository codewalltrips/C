#include<stdio.h>
struct Writer
{
	char Name[50];
	char Genre[50];
}
main()
{
	int i;
	struct Writer W[5];
	for(i=0;i<5;i++)
	{
		printf("Enter details of %d Authors\n",i+1);
		printf("Enter Name");
		scanf("%s",&W[i].Name);
		printf("Enter Genre");
		scanf("%s",&W[i].Genre);
	}
	printf("\nDetails");
	for (i=0;i<5;i++)
	{
		printf("\n%s\t%s",W[i].Name,W[i].Genre);
	}
}
