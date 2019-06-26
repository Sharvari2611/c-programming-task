 #include<stdlib.h>
 #include<conio.h>
 #include<stdio.h>
 #include<string.h>
  main()
 {
 
 	int i,j,ch,count=0;
 	char a[30];
 	char str1[30];
 	char rev[30];
 	int len;
 start:	printf("\nEnter string:");
 	scanf("%s",&str1);
 	strcpy(a,str1);
 	strrev(str1);
 	strcpy(rev,str1);	
 	len=strlen(rev);
 	for(i=0;i<=len-1;i++)
 	 {
 	 	for(j=0;j<=i;j++)
 	 	{
 	 	  if(a[i]==rev[j])
 	 	  {  
 	 		count++;
		  }
		  else{
		  	count=0;
		  }
	    } 
	  } 
	  if(count>0)
	  {
 	    printf("\nEntered string is palindrome");
      }
	 else
	 {
	 	printf("\nThe entered string is not a palindrome");
	 }
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
