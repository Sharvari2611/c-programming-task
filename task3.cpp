#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{
	int a,b,c,ch;
	int sum;
	float avg;
start:	printf("\nEnter the marks in first subject:");
	scanf("%d",&a);
	printf("\nEnter the marks in second subject:");
    scanf("%d",&b);
    printf("\nEnter the marks in third subject:");
    scanf("%d",&c);
    printf("\nMarks in sub1:%d\nMarks in sub2:%d\nMarks in sub3:%d",a,b,c);
    sum=a+b+c;
    printf("\n\nThe total sum  is: %d",sum);
    avg=sum/3;
    printf("\nThe average of the marks is: %f",avg);
    	a=0;b=0;c=0;sum=0;avg=0;
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
