#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
main()
{   
    int ch;
	char fn[30];
	char fn1[30];
	char ln[30];
	char full[30];
start:	printf("\n\nEnter your first name:");
	scanf("%s",&fn);
	printf("\nEnter your last name:");
	scanf("%s",&ln);
	strcat(fn," ");
	strcat(fn,ln);
	strcpy(full,fn);
	printf("\nThe full name is :%s",fn);
   		strcpy(fn,"");
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
