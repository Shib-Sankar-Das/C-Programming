// WAP to multiply two matrix.

#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,r1,c1,r2,c2,r3,c3;
	printf("Enter the No. of Row of First Matrix = ");
	scanf("%d",&r1);
	printf("Enter the No. of Column of First Matrix = ");
	scanf("%d",&c1);
	printf("Enter the No. of Row of Second Matrix = ");
	scanf("%d",&r2);
	printf("Enter the No. of Column of Second Matrix = ");
	scanf("%d",&c2);
	printf("\n\n");
	if(c1==r2)
	{
		//Array Receiving
		int a[r1][c1], b[r2][c2], c[r3][c3], s=0, d=0, e;
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				printf("Enter the number for %d Row & %d Column of 1st Array = ",i,j);
				scanf("%d",&a[i][j]);
			}
		}
		for(i=0;i<r2;i++)
		{
			for(j=0;j<c2;j++)
			{
				printf("Enter the number for %d Row & %d Column of 2nd Array = ",i,j);
				scanf("%d",&b[i][j]);
			}
		}
		//Array Printing
		printf("\n\nThe Multiplication of -- \n");
		printf("\n\t\t\t");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				printf("%d ",a[i][j]);
			}
			printf("\n\t\t\t");
		}
		printf("\n\t\t  AND \n");
		printf("\n\t\t\t");
		for(i=0;i<r2;i++)
		{
			for(j=0;j<c2;j++)
			{
				printf("%d ",a[i][j]);
			}
			printf("\n\t\t\t");
		}
		// Array Calculation
		printf("\n\t\t  IS-----\n");
		printf("\n\t\t\t");
		for(i=0;i<r1;i++)
		{
			for(d=0;d<c2;d++)
			{
				for(j=0;j<r2;j++)
				{
				 s=a[i][j]*b[j][d]+s;
				}
				 c[i][d]=s;
				 printf("%d ",c[i][d]);
				 s=0;
			}
			printf("\n\t\t\t");
		}
	}
	else
	 printf("Please Enter Same Value of Row of First Matrix and Column of Second Matrix");
	 getch();
}