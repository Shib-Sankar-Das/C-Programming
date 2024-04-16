/*
WAP to input a word and capitalise every alternate letter in the word starting from the first letter.
You should keep a check to see if the letter which needs to be case changed is already in the required 
case or not. 
*/

#include<stdio.h>
#include<conio.h>
void main()
{
	char x[100];
	int i;
	printf("Enter the String = ");
	gets(x);
	for(i=0;x[i]!='\0';i+=2)
	{
	  if(x[i]>=97 && x[i]<=122)
		printf("%c",x[i]-32);
      else
       printf("%c",x[i]);
    }
    getch();	
}