/*
WAP to use a function to find the length of a string passed to it and return the length.
Do not use the strlen() function in your program.
*/

#include<stdio.h>
#include<conio.h>
int len(int a[]);
int i;
void main()
{
	int b;
	char x[100];
     printf("Enter the String = ");
     gets(x);
     b=len(x);
     printf("Length of the string = %d",b);
     getch();
}
int len(int d[])
{
  for(i=0;d[i]!='\0';i++)
  {
  }	
  return i;
}     
     