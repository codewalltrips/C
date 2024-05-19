#include<stdio.h>
#include<stdlib.h>
main()
{
	int i,j,c,*ptr,n,p;
	printf("Enter the number of elements=");
	scanf("%d",&n);
	ptr=(int*)malloc(n*sizeof(int));
	if(ptr==NULL)
	{
		printf("Erro.Space not available");
		exit(0);
	}
	printf("Enter the elements=");
	for(i=0;i<n;i++)
	{
		scanf("%d",ptr+i);
	}
	for(i=0;i<n;i++)
	{
		p=*(ptr+i);
		c=0;
		for(j=1;j<=p;j++)
		{
			if(p%j==0)
			c++;
		}
		if(c==2)
		printf("Prime (%d)\n",p);
		else
		printf("Not Prime (%d)\n",p);
	}
}
