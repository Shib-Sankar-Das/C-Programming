/* 
WAP to take input into an integer array & print the array & find out
second max element with in the array.
*/

#include<stdio.h>
#include<conio.h>
void main()
{
	int i, n, max, j, smax, k;
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
	max=a[0];
	j=0;
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
			j=i;
		}
	}
	if(j==0)
	{
	smax=a[1];
	k=1;
	}
	else
	{
	smax=a[0];
	k=0;
	}
	for(i=0;i<n;i++)
	{
		if(j!=i)
		{
		if(a[i]>smax)
		{
			smax=a[i];
			k=i;
		}
		}
	}
	printf("Max. Element = %d Index = %d Position = %d",max,j,j+1);
	printf("\nSecond Max. Element = %d Index = %d Position = %d",smax,k,k+1);
	getch();
}