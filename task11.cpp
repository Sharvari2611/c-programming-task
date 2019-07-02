#include<stdio.h>
#include<conio.h>
  struct book
{
	char title[100];
	char author[100];
	char genre[100];
};
main()
{
	struct book a[2];
	int i;
	for(i=0;i<2;i++)
	{   
		printf("\nEnter the Title of the book:");
		scanf("%s",&a[i].title);
		printf("Enter the Author name:");
		scanf("%s",&a[i].author);
		printf("\nEnter the Genre:");
		scanf("%s",&a[i].genre);
		printf("\n");
	}
	printf("\nThe following are the entries made:");
	for(i=1;i<=2;i++)
	{
	    printf("\n\t Title: %s",a[i].title);
	    printf("\n\t Author name: %s",a[i].author);
	    printf("\n\t Genre: %s",a[i].genre);
    }
	getch();	
}
