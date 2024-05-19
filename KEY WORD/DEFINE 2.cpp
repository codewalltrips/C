#include<stdio.h>
#define MIN(a,b) ((a)<(b)?(a):(b)) 
#define min(a,b,c) (MIN(a,b)>c? c:MIN(a,b))
main()
{
	printf("%d",min(5,6,2));
}
