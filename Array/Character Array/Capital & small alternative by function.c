/*
WAP by writing two functions called upper() and lower(). The first one converts 
any letter to uppercase irrespective of its original case and the second converts
any letter to lowercase irrespective of its original case. Now call these function
to convert the alternate characters to upper and lowercase for a given word entered
by the user [for example for the input word "Olympics", the output will be "OlYmPiCs"].
*/

#include<stdio.h>
#include<conio.h>
void upper(char a[]);
void lower(char b[]);
int i;
void main()
{
	char x[100];
     printf("Enter the String = ");
     gets(x);
     upper(x);
     lower(x);
     printf("The string = %s\n",x);
     getch();
}
void upper(char a[])
{
	for(i=0;a[i]!='\0';i=i+2)
     {
      if(a[i]>=97 && a[i]<=122)
       a[i]=a[i]-32;
      }
}
void lower(char b[])
{
	for(i=1;b[i]!='\0';i=i+2)
     {
      if(b[i]>=65 && b[i]<=90)
       b[i]=b[i]+32;
     }
}