// WAP to delete the middle element of an array having an odd number of an array. 

#include<stdio.h>
#include<conio.h>
void main()
{
	int i, n, m;
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
	printf("\n");
	m=n/2;
	if(n%2==1)
	{
		printf("Array list with out middle element :: \n");
		for(i=0;i<n;i++)
		{
			if(m==i)
			printf(" ");
			else
			printf("%d ",a[i]);
		}
	}
	else
	{
	 printf("\nAs the array is not odd so middle element can't be found");
	}
	getch();
}