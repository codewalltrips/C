#include<stdio.h>
void greatest(int *a,int n)
{
	int i,c,m;
	printf("Roll \nName\t Marks");
	for(i=0;i<n;i++)
	{
		printf("%d\t%c\t%d",a[i],c[i],m[i]);
	}
	

}
main()
{
	int n,i;
	printf("enter range=");
	scanf("%d",&n);
	int a[n],c[n],m[n];
	printf("Enter roll");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter name");
	for(i=0;i<n;i++)
	{
		scanf("%c",&c[i]);
	}
	printf("Enter marks");
	for(i=0;i<n;i++)
	{
		scanf("%d",&m[i]);
	}
	greatest(a,n);
}
