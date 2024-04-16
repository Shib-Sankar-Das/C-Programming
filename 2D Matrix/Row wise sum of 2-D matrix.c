//WAP to take input into a 2-D Matrix & calc. the row wise sum.

#include<stdio.h>
#include<conio.h>
void main()
{
	int i, j, r, c, rowsum=0, k=1;
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
	//row wise sum
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			rowsum=rowsum+a[i][j];
		}
		printf("%d. rowsum is = %d",k,rowsum);
		rowsum=0;
		printf("\n");
		k++;
		
	    }
	     getch();
	}