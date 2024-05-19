#include<stdio.h>
#include<stdlib.h>
main()
{
	int i,a,s,x,y,r,p;
	int *n;
	printf("Enter no of elements");
	scanf("%d",&r);
	n=(int*)calloc(r,sizeof(int));
	if (n==NULL)
	{
		printf("No size");
		exit(0);
	}
	printf("Enter elements");
	for (i=0;i<r;i++)
	{
		scanf("%d",n+i);
	}
	for (i=0;i<r;i++)
	{
		p=*(n+i);
		while (p>9)
	{
		a=p;
		s=0;
		while (a>0)
		{
			x=a%10;
			s=s+x*x;
			a=a/10;
		}
		p=s;
		
	}
	if (s==1)
		printf("Happy NUmber\n");
	else
		printf("Not Happy Number\n");
	}
}
