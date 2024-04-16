//WAP to take input a 2-D matrix & print the matrix & print the transpose matrix

#include<stdio.h>
#include<conio.h>
void main()
{
	int i, j, r, c, colsum=0,k=1;
	printf("Enter the no. of row & column = ");
	scanf("%d%d",&r,&c);
	int a[r][c];
	//input
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("Enter the no. (%d,%d) = ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	//output
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	//transpose
	if(r==c)
	{
		printf("\nTranspose Matrix = \n");
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				printf("%d ",a[j][i]);
			}
			printf("\n");
		}
	}
	else
	 printf("Transpose not found");
	 	getch();
}