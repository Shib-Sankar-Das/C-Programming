/*
WAP to check even and odd number with in an array and 
store them into two different array.
*/

#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,j=0,k=0,m=0;
	printf("Enter the Range = ");
	scanf("%d",&n);
	int a[n], even[n], odd[n];
	for(i=0;i<n;i++)
	{
		printf("Enter the number = ");
		scanf("%d",&a[i]);
	}
	printf("Array List = \n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			even[j]=a[i];
			j++;
		}
		else
		{
			odd[k]=a[i];
			k++;
		}
	}
	printf("\nEven Array List = \n");
	for(i=0;i<j;i++)
	 printf("%d ",even[i]);
	printf("\nOdd Array List = \n");
	for(i=0;i<k;i++)
	 printf("%d ",odd[i]);
	getch();
}