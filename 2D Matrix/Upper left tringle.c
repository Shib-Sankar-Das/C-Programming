//WAP to print upper right tringle of a matrix.

#include<stdio.h>
#include<conio.h>
void main()
{
 int i, j, r1, c1;
 printf("Please Enter the number of row & column of First Matrix - ");
 scanf("%d%d",&r1,&c1);
 int a[r1][c1];
 printf("\n");
 if(r1==c1)
 {
 	for(i=0;i<r1;i++)
 	{
 		for(j=0;j<c1;j++)
 		{
 			printf("Enter (%d,%d) 1st Array- ",i,j);
 			scanf("%d",&a[i][j]);
		}
	}
 }
 printf("\nThe Array =\n");
 	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
 printf("\nUpper Right Triangle = \n");
 for(i=0;i<r1;i++)
 	{
 		for(j=0;j<c1;j++)
 		{
 			if((i+j)<=r1-1)
 			 printf(" %d", a[i][j]);
 			else
 			 printf("  ");
 		}
 		printf("\n");
 	}
 	getch();
}