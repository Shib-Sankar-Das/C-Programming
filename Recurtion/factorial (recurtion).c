//wap to print factorial of a no. using recursion
//in case of recursion func. 4th type is used only i.e. with both return type & parameter passing is used
#include<stdio.h>
#include<conio.h>
int fact(int);//declaration
void main()
{
 int n;
 printf("Enter the No.=");
 scanf("%d",&n);//n=1
 printf("The Factorial of the No. %d is %d",n,fact(n));//calling fact(4) 24
 getch();
}
int fact(int n)//func. definition n=0
{
  if(n==0)//0==0
   return 1;
  else
   return n*fact(n-1);// 24*fact(0)<-- recursive func.
}
