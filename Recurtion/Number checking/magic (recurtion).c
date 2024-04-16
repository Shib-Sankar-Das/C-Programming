//Wap to check whether a no. is magic or not using recursion
#include<stdio.h>
#include<conio.h>
int magic(int);//declaration
int check(int);//declarartion
void main()
{
  int n,x;
  printf("Enter the No. = ");
  scanf("%d",&n);
  x=magic(n);//calling
  if(check(x)==1)//calling  
   printf("%d is Magic No. ",n);
  else
   printf("%d is NOT Magic No. ",n);
  getch();
}
int magic(int n)
{
   if(n==0)
    return 0;
   else
    return n%10+ magic(n/10);    
}
int check(int n)
{
   if(n==0)
    return 0;
   else
    return n%10+ magic(n/10);    
    
}