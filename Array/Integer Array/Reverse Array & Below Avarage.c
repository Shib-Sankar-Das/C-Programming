// WAP to reverce an array and print the below avarage.

#include<stdio.h>
#include<conio.h>
void main()
{
	int i, n, j, s=0, avg;
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
		s=s+a[i];
	}
	j=i;
	avg=s/n;
	printf("\nReverse Array = \n");
	for(i=i-1;i>=0;i--)
	 printf("%d ",a[i]);
	printf("\nTotal Element = %d \nSum = %d Avarage = %d\n",j,s,avg);
	printf("List of Below Average = \n");
	for(i=0;i<n;i++)
	{
		if(a[i]<avg)
		 printf("%d ",a[i]);
	}
	getch();
}