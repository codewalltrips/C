//Write a program in C to calculate the power of any number using recursion. 

#include <stdio.h>
 
long int CalcuOfPower(int x,int y)
{
    long int result=1;
    if(y == 0) 
	return result;
    result=x*(CalcuOfPower(x,y-1));  //calling the  function CalcuOfPower itself recursively
}
int main()
{
    int bNum,pwr;
    long int result;
    printf("\n\n Recursion : Calculate the power of any number :\n");
	printf("----------------------------------------------------\n");	
     
    printf(" Input the base  value : ");
    scanf("%d",&bNum);
     
    printf(" Input the value of power : ");
    scanf("%d",&pwr);
     
    result=CalcuOfPower(bNum,pwr);//called the function CalcuOfPower
     
    printf(" The value of %d to the power of %d is : %ld\n\n",bNum,pwr,result);
     
    return 0;
}

