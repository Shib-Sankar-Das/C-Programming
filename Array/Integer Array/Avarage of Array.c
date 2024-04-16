// WAP to take input into an integer array & print the array & calculate the avarage of the array.

#include<stdio.h>
#include<conio.h>
void main()
{
	int i, n, s=0;
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
	s=s/n;
	printf("\nAvarage = %d",s);
	getch();
}