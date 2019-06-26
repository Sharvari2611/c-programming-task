#include<stdio.h>
#include<conio.h>
main()
{
	int i,num,res;
	printf("\nEnter the number:");
	scanf("%d",&num);
	printf("\n The multiplication table is:");
	for(i=1;i<11;i++)
	  {
	  	res=num*i;
	  	printf("\n%d * %d = %d",num,i,res);
	  }
	getch();  
}
