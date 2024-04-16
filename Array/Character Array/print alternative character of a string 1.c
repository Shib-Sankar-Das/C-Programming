/*
WAP to input a string and print every alternate character
from the string starting from the first character.
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
		if(x[i]==' ')
		 {
		 	i=i+1;
		 	printf("%c",x[i]);
		 }
		else
		 printf("%c",x[i]);
	}
	getch();
}