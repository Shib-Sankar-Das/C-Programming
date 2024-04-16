// WAP to Add two Matrix.

#include<stdio.h>
#include<conio.h>
void main()
{
	int i, j, r, c;
	printf("Enter the Row = ");
	scanf("%d",&r);
	printf("Enter the Column = ");
	scanf("%d",&c);
	//input
	printf("\n");
	int a[r][c], b[r][c], x[r][c];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("Enter the number for %d Row & %d Column of 1st Array = ",i,j);
			scanf("%d",&a[i][j]);
			printf("Enter the number for %d Row & %d Column of 2nd Array = ",i,j);
			scanf("%d",&b[i][j]);
			x[i][j]=a[i][j]+b[i][j];
		}
	}
	//output
	printf("\nMatrix Addition = \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",x[i][j]);
		}
		printf("\n");
	}
	getch();
}