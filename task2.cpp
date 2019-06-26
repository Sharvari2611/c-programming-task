#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{
	float c,f,F;
	int ch;
	printf("\tThe celcius to farenheit conversion");
start:printf("\n\nEnter the temperature in degree celcius:");
	scanf("%f",&c);
	F=((9*c)/5)+32;
	printf("\nThe temperature in kelvin is:%f",F);
    F=0;
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
