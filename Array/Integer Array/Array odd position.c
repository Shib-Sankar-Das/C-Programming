// WAP to print odd position with in an array.

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
	printf("Array List :: \n");
	for(i=0;i<n;i++)
	{
		printf("a[%d] = %d\n",i,a[i]);
	}
	printf("\nOdd Position :: \n");
	for(i=0;i<n;i++)
	{
		if((i+1)%2==1)
		 printf("%d position %d\n",a[i],i+1);
	}
	getch();
}
		