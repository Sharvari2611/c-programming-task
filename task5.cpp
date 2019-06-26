#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int num,rev,d,ch,sum=0;
main()
{
start:	printf("\nEnter the number:");
	scanf("%d",&num);
	d=num;
	while(d!=0)
	{
	rev=rev*10;
	rev=rev+(d%10);
	d=d/10;
	}
	printf("\nThe reverse of number is: %d",rev);
	rev=0;
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
