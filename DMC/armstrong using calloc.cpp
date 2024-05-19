#include<stdio.h>
#include<stdlib.h>
main()
{
	int i,n,j,k,p,sum,r;
	int *element;
	printf("Enter the number of elements");
	scanf("%d",&n);
	element=(int*)calloc(n,sizeof(int));
	if(element==NULL)
	{
		printf("Error,Space not available");
		exit(0);
	}
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
			sum=sum+r*r*r;
			p=p/10;
		}
		if(sum==k)
		printf("Armstrong number (%d)\n",k);
		else
		printf("Not Armstrong number (%d)\n",k);
	}
}
