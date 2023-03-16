#include<stdio.h>

main()
{
	int number;
	printf("Enter Number=");
	scanf("%d",&number);
	
	if(number<0)
	{
	    printf("The Number is not Neutral");	
	}
	else if(number>0)
	{
	    printf("The Number is Neutral");
	  
	}  
	 else if(number==0)
	 {
	 	printf("The Number is also Neutral");
		}   
}
