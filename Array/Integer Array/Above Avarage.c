/*
WAP to take input into an integer array & print the array & calculate the avarage
of the array & print element above avarage.
*/

#include<stdio.h>
#include<conio.h>
void main()
{
	int i, n, s=0, avg;
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
	avg=s/n;
	printf("\nAvarage = %d\n",avg);
	printf("\nAbove Avarage :");
	for(i=0;i<n;i++)
	{
		if(a[i]>avg)
		printf("\n%d index [%d]",a[i],i);
	}
	getch();
}