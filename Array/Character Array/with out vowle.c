/*
WAP to input a word into a string type variable and then create a new string from input word 
such that the new string does not have any any vowel in it [ for example if the input string 
is "Intelligence", then the output string will be "ntllgnc"]
*/

#include<stdio.h>
#include<conio.h>
void main()
{
	char x[100];
	int i;
	printf("Enter the String = ");
	gets(x);
	for(i=1;x[i]!='\0';i++)
	{
		if(x[i]!='a' && x[i]!='A' && x[i]!='e' && x[i]!='E' && x[i]!='i' 
		&& x[i]!='I' && x[i]!='o' && x[i]!='O' && x[i]!='u' && x[i]!='U')
		 printf("%c",x[i]);
	}
	getch();
}