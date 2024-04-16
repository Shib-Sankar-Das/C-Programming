//prime No using C.L.A.
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main(int argc,char* argv[])//argc=3
{
 int i,n,f=0;
 if(argc==2)
 {
   n=atoi(argv[1]);//n=5
   for(i=2;i<n;i++)
   {
     if(n%i==0)
     {
       f=1;
       break;
     }
   }
   if(f==0)
    printf("Prime No.");
   else
    printf("NOT Prime No.");
 }
 else
  printf("Mismatch Argument");
 getch();
}