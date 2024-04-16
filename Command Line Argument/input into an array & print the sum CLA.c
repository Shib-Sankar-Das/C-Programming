//wap to take input into an array & print the sum
#include<stdio.h>
#include<conio.h>
void main(int argc,char* argv[])
{
  int i,s=0,a[argc-1];
  for(i=1;i<=argc-1;i++)
  {
    a[i-1]=atoi(argv[i]);
    s+=a[i-1];                    
  }
  printf("Sum = %d\n",s);
  for(i=0;i<argc-1;i++)
   printf("%d ",a[i]);
  getch();
}