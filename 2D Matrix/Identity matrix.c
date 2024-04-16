//WAP to check Null Matrix.

#include<stdio.h>
#include<conio.h>
void main()
{
 int i, j, r1, c1, f=1;
 //input
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
 		printf("Enter the elements (%d,%d) of the array = ",i,j);
 		scanf("%d",&a[i][j]);
	}
 }
 //output
printf("\nThe Array is = \n\n");	
 for(i=0;i<r1;i++)
 {
 	for(j=0;j<c1;j++)
 	{
 		printf("%d ", a[i][j]);
	}
	printf("\n");
 }
 //checking
 for(i=0;i<r1;i++)
 {
 	for(j=0;j<c1;j++)
 	{
 		if(i==j && a[i][j]!=1)
 		f=0;
 		else if(i!=j && a[i][j]!=0)
 		f=0;
	}
 }
 if(f==0)
  printf("\nThe Matrix NOT is Identity Matrix");
 else
  printf("\nThe Matrix is Identity Matrix");
 }
 else
 printf("\nNumber of Row and Column are not same. ");
 getch();
}
 