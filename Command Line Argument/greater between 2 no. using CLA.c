//wap to check greater between 2 no. using C.L.A.
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main(int argc,char* argv[])
{
 int x,y;
 if(argc==3)//argc=4
 {
   x=atoi(argv[1]);//x=50
   y=atoi(argv[2]);//y=20
   if(x>y)
    printf("1st No. %d is Greater",x);
   else if(x==y)
    printf("Both Equal"); 
   else
    printf("2nd No. %d is Greater",y);
 }
 else
  printf("No. of argument is mismatched");
 getch();
}