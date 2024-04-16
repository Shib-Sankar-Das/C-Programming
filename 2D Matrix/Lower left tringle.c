//WAP to print lower left tringlr of a matrix.

#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,r,c,count=0;
	printf("Enter the No. of Row & Column = ");
	scanf("%d%d",&r,&c);
	int a[r][c], b[r][c];
	//input
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("Enter the number (%d,%d) = ",i,j);
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
	//lower left
	//output
	if(r==c)
	{
		printf("\nLower left Tringle = \n");
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				if(i>=j)
				printf("%d ",a[i][j]);
			}
			printf("\n");
		}
	}
	else
	printf("As it`s not Square so lower left trangle can`t found");
		getch();
}