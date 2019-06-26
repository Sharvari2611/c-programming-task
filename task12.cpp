#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
main()
{
	int ch;
	float c,f;
start:	printf("\n1.Celcius to farenheit.\n2.Farhnheit to celcius.\n3.continue\n4.Exit.");
	printf("\nSelect an option you want to perform:");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			printf("\nEnter the temperature in farenheit:");
			scanf("%f",&f);
			c=(5*(f-32))/9;
			printf("The farenheit to celcius conversion is %f",c);
			break;
		case 2:
		    printf("\nEnter the temperature in celcius:");
			scanf("%f",&c);
			f=((9*c)/5)+32;
			printf("The celcius to farenheit conversion is %f",f);
			break;
		case 3:
		    goto start;	
		case 4:
		    exit(0);
			break;
		default:
		    printf("\nInvalid option.");
			break;
	}
	getch();
}
