//WAP to check semetric matrix.

#include<stdio.h>
#include<conio.h>
void main()
{
 int x,y,i,j,k,l,s=0;
 printf("Enter the row no. = ");
 scanf("%d",&x);
 printf("Enter the column no. = ");
 scanf("%d",&y);
 int a[x][y];
 printf("\n");
 if(x==y)
 {
 for(i=0;i<x;i++)
 {
 	for(j=0;j<y;j++)
 	{
 		printf("Enter the element (%d,%d) = ",i,j);
 		scanf("%d",&a[i][j]);
 	}
 }
// output
 printf("\n\nThe Matrix is :-\n");
 for(i=0;i<x;i++)
 {
 	printf("\n\t");
 	for(j=0;j<y;j++)
 	{
 		printf("%d ",a[i][j]);
 	}
 }
// chaking
 	s=0;
 	for(i=0;i<x;i++)
 	{
 		printf("\n\t");
 		for(j=0;j<y;j++)
 		{
 		if(a[i][j]!=a[j][i])
 		s=1;
 		}
 	}
 if(s==1)
  printf("\nThis is not Symetric Matrix");
 else
  printf("\nThis is Symetric Matrix");
 }
 else
  printf("\nRow and column are not same ");
  getch();
} 
