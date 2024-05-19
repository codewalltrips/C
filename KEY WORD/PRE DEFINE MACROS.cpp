    #include<stdio.h>  
     int main()
	 {    
       printf("File :%s\n", __FILE__ );    
       printf("Date :%s\n", __DATE__ );    
       printf("Time :%s\n", __TIME__ );    
       printf("Line :%d\n", __LINE__ );    
       printf("STDC :%d\n", __STDC__ );      
       return 0;  
     }  
	 
	 /*
	 
	_DATE_	represents current date in "MMM DD YYYY" format.
	_TIME_	represents current time in "HH:MM:SS" format.
	_FILE_	represents current file name.
	_LINE_	represents current line number.
	_STDC_	It is defined as 1 when compiler complies with the ANSI standard.

*/  
