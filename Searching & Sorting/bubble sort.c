//bubble sort

#include<stdio.h>
#include<conio.h>
void main()
{
 int i,j,n,a[5],temp=0,k=1;
 printf("Enter the Range = ");
 scanf("%d",&n);
 //input
 for(i=0;i<n;i++)
 {
  printf("Enter the No. = ");
  scanf("%d",&a[i]);
 }
 //bubble sort
 printf("\nAfter Sorting : \n");
 for(i=0;i<n;i++)
 {
   for(j=0;j<n-1;j++)
   {
      if(a[j]>a[j+1])
      {
        temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
      }
   }
 printf("Iteration %d =\n",k);
 for(j=0;j<n;j++)
 {
  printf("%d ",a[j]);
 }
 printf("\n");
 k++;
 printf("\n");
 }
  getch();
}