// WAP to take input into an array & print the array with index & address.

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
	printf("\nArry List ::\n");
	for(i=0;i<n;i++)
	{
		printf("a[%d] = %d Address = %u \n",i,a[i],&a[i]);
	}
	getch();
}