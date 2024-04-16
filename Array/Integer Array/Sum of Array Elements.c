// WAP to take input into an integer array & print the array & calculate the sum.

#include<stdio.h>
#include<conio.h>
void main()
{
	int i, n, s=0;
	printf("Enter the Range = ");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("Enter the number = ");
		scanf("%d",&a[i]);
	}
	printf("\nArry List ::\n");
	for(i=0;i<n;i++)
	{
		printf("a[%d] = %d\n",i,a[i]);
		s=s+a[i];
	}
	printf("\nSum = %d",s);
	getch();
}