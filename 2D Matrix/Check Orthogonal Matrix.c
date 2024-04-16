// WAP to check Orthogonal Matrix.

#include<stdio.h>
#include<conio.h>
void main()
{
	int i, j, n, m, s=0, d=0, f=1;
	printf("Enter the Row = ");
	scanf("%d",&n);
	printf("Enter the Column = ");
	scanf("%d",&m);
	int a[n][m], b[n][m], c[n][m];
	printf("\n");
	//input
	if(n==m)
	{
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("Enter the no. (%d,%d) = ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	//print
printf("\nThe matrix is = \n\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d ",a[i][j]);
			b[i][j]=a[j][i];
		}
		printf("\n");
	}
printf("\nThe transpose matrix is = \n\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
//check
 printf("\nMultiplicatoin of the matrix and the transpose matrix.\n\n");
 for(i=0;i<n;i++)
 {
	for(d=0;d<m;d++)
	{
		for(j=0;j<n;j++)
		{
		 s=a[i][j]*b[j][d]+s;
		}
		c[i][d]=s;
		printf("%d ",c[i][d]);
		s=0;
	}
	printf("\n");
 }
 for(i=0;i<n;i++)
 {
 	for(j=0;j<m;j++)
 	{
 		if(i==j && c[i][j]!=1)
 		f=0;
 		else if(i!=j && c[i][j]!=0)
 		f=0;
	}
 }
 if(f==0)
  printf("\nThe Matrix NOT is Orthogonal Matrix");
 else
  printf("\nThe Matrix is Orthogonal Matrix");
 }
 else
 printf("\nNumber of Row and Column are not same. ");
 getch();
}