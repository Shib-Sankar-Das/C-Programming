// WAP to print even elements with in an array.

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
	printf("\nEven Elements :: \n");
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		 printf("%d ",a[i]);
	}
	getch();
}
		