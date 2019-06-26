#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
void exit(int);
main()
     {
	    int d,a,num,sum=0,ch;
start:	printf("\nEnter a number:");
	    scanf("%d",&num);
	    d=num;
	    while(d!=0)
	     {
	    	a=d%10;
		    sum=sum+(a*a*a);
		    d=d/10;
	     }
	   if(num==sum)
	     {
	    	printf("The given number %d is a armstrong number.",num);
	     }
	    else
	     {
		    printf("The given number %d is not a armstrong number.\n",num);
	     }
	    sum=0;num=0; 
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
