//insertion sort

#include<stdio.h>
#include<conio.h>
void insertionsort(int[],int);
void main()
{
 int a[10],i,n;
 printf("Enter the Range = ");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
   printf("Enter the No. = ");
   scanf("%d",&a[i]);
 }
 printf("\nAfter Sorting : \n");
 insertionsort(a,n);
 getch();
}

void insertionsort(int a[],int y)
 {
  int i,j,temp,k=1;
  for(i=1;i<y;i++)
  {
    j=i;
    while(j>0 && a[j-1]>a[j])
     {
       temp=a[j-1];
       a[j-1]=a[j];
       a[j]=temp;
       j--;
    }
  printf("Iteration %d =\n",k);
  for(j=0;j<y;j++)
   {
   printf("%d ",a[j]);
   }
  k++;
  printf("\n");
  }
}