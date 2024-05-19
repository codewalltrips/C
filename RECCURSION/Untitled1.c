//Write a program in C to count the digits of a given number using recursion. 

#include<stdio.h>

int noOfDigits(int n1);
int main()
{
  int n1,ctr;
    printf(" Input  a number : ");
    scanf("%d",&n1);

    ctr = noOfDigits(n1);

    printf(" Armstrong");
    return 0;
}

int noOfDigits(int n1)
{
    int n,s=0,r,t;
	printf("Enter a number");
	scanf("%d",&n);
	t=n;
	while (n>0)
	{
		r=n%10;
		s=s+r*r*r;
		n=n/10;
	}
	if (s==t)

    return ctr;
}

