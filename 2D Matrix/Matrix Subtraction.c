//WAP to Subtract two Matrix.

#include<stdio.h>
#include<conio.h>
void main()
{
//input for first matrix ..................A
 int x1,y1,x2,y2,i,j,k,l,s=0,p;
 printf("FIRST MATRIX\n");
 printf("Enter the row no = ");
 scanf("%d",&x1);
 printf("Enter the column no = ");
 scanf("%d",&y1);
 int a[x1][y1];
 printf("\n");
 for(i=0;i<x1;i++)
 {
 	for(j=0;j<y1;j++)
 	{
 		printf("Enter the element (%d,%d) = ",i,j);
 		scanf("%d",&a[i][j]);
 	}
 }
 printf("\n\n");
//input for second matrix ..................B
 printf("SECOND MATRIX\n");
 printf("Enter the row no = ");
 scanf("%d",&x2);
 printf("Enter the column no = ");
 scanf("%d",&y2);
 int b[x2][y2];
 printf("\n");
 for(i=0;i<x2;i++)
 {
 	for(j=0;j<y2;j++)
 	{
 		printf("Enter the element (%d,%d) = ",i,j);
 		scanf("%d",&b[i][j]);
 	}
 }
 printf("\n\n");
// output for first matrix ...............A
 printf("\n\nThe FIRST[A] Matrix is\n");
 for(i=0;i<x1;i++)
 {
 	printf("\n\t");
 	for(j=0;j<y1;j++)
 	{
 		printf("%d ",a[i][j]);
 	}
 }
// output for second matrix ...............B
 printf("\n\nThe SECOND[B] Matrix is\n");
 for(i=0;i<x2;i++)
 {
 	printf("\n\t");
 	for(j=0;j<y2;j++)
 	{
 		printf("%d ",b[i][j]);
 	}
 }
// output
//...........................................A + B
 if(x1==x2 && y1==y2)
 {
 	int c[x1][y1];
 	for(i=0;i<x1;i++)
 	{
 		for(j=0;j<y2;j++)
 		{
 			s=a[i][j]-b[i][j];
 			c[i][j]=s;
 		}

 	}	
 	printf("\n\nThe Matrix SUBTRACTION[A - B] is\n");
 	for(i=0;i<x1;i++)
 	{
 		printf("\n\t");
 		for(j=0;j<y1;j++)
 		{
 			printf("%d ",c[i][j]);
 		}
 	}
 }
 else
  printf("\n\nSUBTRACTION IS NOT POSSIBLE");
  printf("\n\nTHANK YOU");
 getch();
}