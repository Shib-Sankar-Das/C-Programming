// WAP to check whether a matrix is sparse or not.
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
			if(a[i][j]==0 || a[i][j]==1)
			count++;
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	if(count>(r*c)/2)
	printf("Sparse Matrix");
	else
	printf("NOT Sparse Matrix");
	getch();
}