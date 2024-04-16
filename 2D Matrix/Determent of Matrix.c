//WAP to calculating determenant

#include<stdio.h>
#include<conio.h>
#define pr printf
#define scanf scanf
void main()
{
 int n,i,j,k,n1,p,s=0,s1;
 printf("you are calculatint ditermenant of a martix \nso the number of row and the column should be same.....\n\n");
 printf("Enter the value of the Row and Column = ");
 scanf("%d",&n);
 n1=(2*n)-1;
 int a[n][n],b[n][n1];
 printf("\n");
//input
 for(i=0;i<n;i++)
 {
 	for(j=0,k=n;j<n;j++,k++)
 	{
 		printf("Enter the element (%d,%d) = ",i,j);
 		scanf("%d",&a[i][j]);
 		b[i][j]=a[i][j];
 		b[i][k]=a[i][j];
 	}
 }
//output of A
 printf("\n\nThe Matrix is A =\n");
 for(i=0;i<n;i++)
 {
 	printf("\n\t");
 	for(j=0;j<n;j++)
 	{
 		printf("%d ",a[i][j]);
 	}
 }
//output of B
 printf("\n\nThe Matrix is B =\n");
 for(i=0;i<n;i++)
 {
 	printf("\n\t");
 	for(j=0;j<n1;j++)
 	{
 		printf("%d ",b[i][j]);
 	}
 }
//calculation
 s=0;
//from up
 for(j=0;j<n;j++)
 {
 	k=j;
 	p=1;
 	for(i=0;i<n;i++,k++)
 	{
 		p=p*b[i][k];
 	}
 // printf("\n%d",p);
 	s=s+p;
 }
//from down
 s1=0;
 for(j=0;j<n;j++)
 {
 	k=j;
 	p=1;
 	for(i=n-1;i>=0;i--,k++)
 	{
 		p=p*b[i][k];
 	}
 // printf("\n%d",p);
 	s1=s1+p;
}
	printf("\nThe determent value is %d",s-s1);
 getch();
} 