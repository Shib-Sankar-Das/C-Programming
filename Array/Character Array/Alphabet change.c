/*
WAP to input a word and convert to another word such that every alphabet 
in the new word is one position ahead of the oiginal alphabet 
[for example "zebra" will become "afcsb"] 
*/

#include<stdio.h>
#include<conio.h>
void main()
{
	char x[100];
	int i;
	printf("Enter the String = ");
	gets(x);
	for(i=0;x[i]!='\0';i++)
	{
		if(x[i]=='z' || x[i]=='Z')
		 x[i]=x[i]-25;
		else
		 x[i]=x[i]+1;
	}
	printf("String = %s",x);
	getch();
}