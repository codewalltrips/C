#include<stdio.h>
#include<stdlib.h>
main()
{
	int i,n,*ptr,s,t,p,t1,l,r;
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
		t=p;
		t1=p;
		l=0;
		s=0;
		while(p>0)
		{
			p=p/10;
			l++;
		}
		while(t>0)
		{
			r=t%10;
			s=s+pow(r,l);
			t=t/10;
			l--;
		}
		if(s==t1)
		printf("It is a Disarium Number\n");
		else
		printf("It is not a Disarium Number\n");
		
		
	}
}
