//WAP to input a 2-D matrix & print the matrix.

#include<stdio.h>
#include<conio.h>
void main()
{
	int i, j, r, c;
	printf("Enter the No. of row & column = ");
	scanf("%d%d",&r,&c);
	int a[r][c];
	//input
	for(i=0;i<r; i++)
	{
		for(j=0;j<c;j++)
		{
			printf("Enter the number (%d,%d) = ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	//output
	printf("\nMatrix = \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	getch();
}
