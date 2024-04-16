//WAP to count number of zero in a matrix

#include<stdio.h>
#include<conio.h>
void main()
{
 int x,y,i,j,s=0;
 printf("Enter the row no. = ");
 scanf("%d",&x);
 printf("Enter the column no. = ");
 scanf("%d",&y);
 int a[x][y];
 printf("\n");
 for(i=0;i<x;i++)
 {
 	for(j=0;j<y;j++)
	{
 		printf("Enter the element (%d,%d) = ",i,j);
 		scanf("%d",&a[i][j]);
 	}
 }
// output
 printf("\n\nThe matrix is :-\n");
 for(i=0;i<x;i++)
 {
 	printf("\n\t");
 	for(j=0;j<y;j++)
 	{
 		printf("%d ",a[i][j]);
	}
 }
// output
 for(i=0;i<x;i++)
 {
 	for(j=0;j<y;j++)
 	{
 		if(a[i][j]==0)
 		s++;
 	}
 }
 if(s==0)
  printf("\n\nThere is no zero in matrix");
 else
  printf("\n\nThere is %d zeros in matrix",s);
 getch();
}