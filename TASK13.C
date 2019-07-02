#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	int a[50],i,n,ch,max,min;
	start:printf("\nEnter the no of elements of array:");
	scanf("%d",&n);
	printf("\nEnter elements:");
	for(i=0;i<n;i++)
	{
	 scanf("%d",&a[i]);	
	}
	printf("\nThe elements of the array are:");
	printf("\na= {");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
		
		if(i<n-1)
		{
		printf(",");
	    }
	    else
	    {
	    	printf("");
		}
	}
	printf("}");
        max=a[0];
	for(i=0;i<n;i++)
	{
    	if(a[i]>max)
    	{
    		max=a[i];
		}
    }  
    printf("\nThe largest element in array is: %d",max);
    min=a[0];
	for(i=0;i<n;i++)
    {
    	if(a[i]<min)
    	{
    		min=a[i];
		}
	}
	printf("\nThe smallest element in array is: %d",min);
	max=0;min=0;
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