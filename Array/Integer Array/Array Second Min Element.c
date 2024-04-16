/* 
WAP to take input into an integer array & print the array & find out
second min element with in the array.
*/

#include<stdio.h>
#include<conio.h>
void main()
{
	int i, n, min, j, smin, k;
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
	min=a[0];
	j=0;
	for(i=0;i<n;i++)
	{
		if(a[i]<min)
		{
			min=a[i];
			j=i;
		}
	}
	if(j==0)
	{
	smin=a[1];
	k=1;
	}
	else
	{
	smin=a[0];
	k=0;
	}
	for(i=0;i<n;i++)
	{
		if(j!=i)
		{
		if(a[i]<smin)
		{
			smin=a[i];
			k=i;
		}
		}
	}
	printf("Min. Element = %d Index = %d Position = %d",min,j,j+1);
	printf("\nSecond Min. Element = %d Index = %d Position = %d",smin,k,k+1);
	getch();
}