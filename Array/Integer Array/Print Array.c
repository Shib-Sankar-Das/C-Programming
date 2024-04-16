// WAP to take input into an array & print the array.

#include<stdio.h>
#include<conio.h>
void main()
{
	int i, n;
	printf("Enter the Range = ");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("Enter the number = ");
		scanf("%d",&a[i]);
	}
	printf("Arry List = ");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	getch();
}