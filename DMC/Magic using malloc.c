#include<stdio.h>
#include<stdlib.h>
main()
{
	int i,n,r,s,t,p,*ptr;
	printf("Enter the number of elements=");
	scanf("%d",&n);
	ptr=(int*)malloc(n*sizeof(int));
	if(ptr==NULL)
	{
		printf("No space available");
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
		while(p>9)
		{
			t=p;
			s=0;
			while(t>0)
			{
				r=t%10;
			    s=s+r;
			    t=t/10;
			}
			p=s;		
		}
		if(s==1)
		printf("The number is Magic Number\n");
		else
		printf("The number is not Magic Number\n");
	}
}
