//WAP to take input into a 2-D Matrix & calc. the column wise sum.

#include<stdio.h>
#include<conio.h>
void main()
{
	int i, j, r, c, colsum=0, k=1;
	printf("Enter the No. of Row & Column = ");
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
	//column wise sum
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		{
			colsum=colsum+a[j][i];
		}
		printf("%d. column sum is = %d",k,colsum);
		colsum=0;
		printf("\n");
		k++;
		
	    }
	     getch();
	}