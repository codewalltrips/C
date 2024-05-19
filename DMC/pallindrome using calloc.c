#include<stdio.h>
#include<stdlib.h>
main()
{
	int i,p,k,sum,r,n;
	int *element;
	printf("Enter the number of elements=");
	scanf("%d",&n);
	element=(int*)calloc(n,sizeof(int));
	if(element==NULL)
	{
		printf("No space available");
		exit(0);
	}
	printf("Enter the elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",element+i);
	}
	for(i=0;i<n;i++)
	{
		p=*(element+i);
		k=p;
		sum=0;
		while(p>0)
		{
			r=p%10;
			sum=10*sum+r;
			p=p/10;
		}
		if(sum==k)
		printf("Pallindrome number\n");
		else
		printf("Not Pallindrome number\n");
	}
}
