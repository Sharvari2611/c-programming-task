#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{
	int a[50],i,n;
	printf("\nEnter the no of elements of array:");
	scanf("%d",&n);
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
	int max=a[0];
	for(i=0;i<n;i++)
	{
    	if(a[i]>max)
    	{
    		max=a[i];
		}
    }  
    printf("\nThe largest element in array is: %d",max);
    int min=a[0];
	for(i=0;i<n;i++)
    {
    	if(a[i]<min)
    	{
    		min=a[i];
		}
	}
	printf("\nThe smallest element in array is: %d",min);
	getch();
}
