/*

The continue statement in C language is used to bring the program control to the beginning of the loop.
 The continue statement skips some lines of code inside the loop and continues with the next iteration. 
It is mainly used for a condition so that we can skip some code for a particular condition.*/

    #include<stdio.h>  
    main()  
    {  
        int i = 0;   
        while(i!=10)  
        {  
            printf("%d\t", i);   
            continue;   
            i++;
        }  
    }  
