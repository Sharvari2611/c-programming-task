#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{
	int n,num,ch,fact=1;
start:printf("\nEnter the number to find the factorial:");
	scanf("%d",&n);
	num=n;
	while(n!=0)
	{
		fact=n*fact;
		n=n-1;
    }
    printf("\nThe factorial of  %d is %d",num,fact);
    	num=0;fact=1;
		printf("\n1.continue\n2.Exit");
     	printf("\nSelect a choice:");
	    scanf("%d",&ch);
	    if(ch==1)
	      {
	  	   goto start;
    	  }
    	else
    	  {
		   exit(0);
		  }
	getch();
}
