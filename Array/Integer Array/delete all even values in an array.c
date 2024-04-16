// WAP to delete all even values with in an array.

#include<stdio.h>
#include<conio.h>
void main()
{
	int i, n, m, c=0;
	printf("Enter the Range = ");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("Enter the Number = ");
		scanf("%d",&a[i]);
	}
	printf("Array List :: \n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		 {
		 	a[i]=0;
		 	c++;
		 }
	}
	if(c>0)
	{
		printf("\nArray list with out even elements :: \n");
		for(i=0;i<n;i++)
	    {
	    	printf("%d ",a[i]);
	    }
	}
	else
	 printf("\nThere are not any even elements in the array");
	getch();
}