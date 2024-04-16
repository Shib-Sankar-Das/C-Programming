/*
WAP to input a sentence and capacity every alternative letter in the sentence.
[for example "Good morning India" will become "GoOd MoRnInG iNdIa"].
*/

#include<stdio.h>
#include<conio.h>
void upper(char a[]);
void lower(char c[]);
int i, n;
void main()
{
	int i, n;
	char x[100], y[100];
     printf("Enter the String = ");
     gets(x);
     for(i=0,n=0;x[i]!='\0';i++)
     {
     	if(x[i]!=' ')
     	{
     	 y[n]=x[i];
		  n++;	
		}
	 }
	 upper(y);
	 lower(y);
	 for(i=0,n=0;x[i]!='\0';i++)
	 {
	 	if(x[i]!=' ')
	 	 {
		  x[i]=y[n];
		  n++;
		 }
     }
     printf("Result = %s",x);
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
void lower(char c[])
{
	for(i=1;c[i]!='\0';i=i+2)
     {
      if(c[i]>=65 && c[i]<=90)
       c[i]=c[i]+32;
     }
}
     