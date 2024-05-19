#include<stdio.h>
struct complex
{
	float real;
	float imaginary;
}
c1,c2,t;
struct complex add(struct complex c1,struct complex c2)
{
	t.real=c1.real+c2.real;
	t.imaginary=c1.imaginary+c2.imaginary;
	return(t);
}
main()
{
	printf("Enter the first complex number\n");
	printf("Enter the real and imaginary parts=\n");
	scanf("%f %f",&c1.real,&c1.imaginary);
	printf("Enter the second complex number\n");
	scanf("%f %f",&c2.real,&c2.imaginary);
	t=add(c1,c2);
	printf("The sum is:%f + %f i",t.real,t.imaginary);
	
}
