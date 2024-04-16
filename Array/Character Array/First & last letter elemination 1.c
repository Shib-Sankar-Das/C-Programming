/*
WAP to input a word and form a new word in a new string by removing the first and the last letters from the words.
[for example for the input word "Computer", the output will be "oumpute"] 
*/

#include<stdio.h>
#include<conio.h>
void main()
{
	char x[100], y[100];
	int i,c;
	printf("Enter the String = ");
	gets(x);
	for(i=0;x[i]!='\0';i++)
	{
		if(i!=0 && x[i+1]!='\0')
		 y[i-1]=x[i];
	}
	 y[i-1]='\0';
	printf("Output string = %s",y);
	getch();
}