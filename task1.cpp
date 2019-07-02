#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
main()
{
  int age,ch;
  char num[10];
  char name[20];
start:  printf("\nEnter your name:");
 
  scanf("%s",&name);
  printf("Enter your age:");
  scanf("%d",&age);
  printf("Enter the phone number:");
  scanf("%s",&num);
  printf("\n\tDetails displayed\n");
  printf("\nName:%s",name);
  printf("\nAge:%d",age);
  printf("\nPhone no:%s",num);
   age=0;
  strcpy(num,"");
  strcpy(name,"");
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

