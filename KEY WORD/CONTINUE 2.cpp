    #include<stdio.h>  
    int main()
	
	{  
    int i=1;//initializing a local variable       
    //starting a loop from 1 to 10    
    for(i=1;i<=10;i++)
	{      
    if(i==5)
	{//if value of i is equal to 5, it will continue the loop    
    continue;    
    }    
    printf("%d \n",i);    
    }//end of for loop    
    return 0;
    }    
