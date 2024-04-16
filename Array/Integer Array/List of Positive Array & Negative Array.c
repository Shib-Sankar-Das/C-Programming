/*
WAP to check Possative and Negative number with in array and 
store Possative and Negative number in two different array.
*/

#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,j=0,k=0,m=0;
	printf("Enter the Range = ");
	scanf("%d",&n);
	int a[n], pos[n], neg[n], x[n];
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
		if(a[i]>0)
		{
			pos[j]=a[i];
			j++;
		}
		else if(a[i]==0)
		{
			x[m]=a[i];
			m++;
		}
		else
		{
			neg[k]=a[i];
			k++;
		}
	}
	printf("\nPositive Array List = \n");
	for(i=0;i<j;i++)
	 printf("%d ",pos[i]);
	printf("\nNegative Array List = \n");
	for(i=0;i<k;i++)
	 printf("%d ",neg[i]);
	printf("\nZero Array List = \n");
	for(i=0;i<m;i++)
	 printf("%d ",x[i]);
	getch();
}