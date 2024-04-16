//WAP to print digonal elements 

#include<stdio.h>
#include<conio.h>
void main()
{
 int x,y,i,j,s=0;
 printf("Enter the row no = ");
 scanf("%d",&x);
 printf("Enter the column no = ");
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
 printf("\nThe matrix is :-\n");
 for(i=0;i<x;i++)
 {
 	printf("\n\t");
  	for(j=0;j<y;j++)
  	{
  		printf("%d ",a[i][j]);
  	}	
 }
// output
 if(x==y)
 {
  printf("\n\nDigonal element are :- ");
  for(j=0;j<y;j++)
  {
  	for(i=0;i<x;i++)
	{
   		if(i==j)
   		printf("%d,",a[i][j]);
   	}
  }
 }
 else
  printf("\nThis is not a squre matrix");
  getch();
} 
