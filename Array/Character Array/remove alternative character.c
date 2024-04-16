/*
WAP to input a string and remove every alternate letter from the string from the second 
character from the left and print the final string. [e.g. "Sunday" will become "Sna"]
*/

#include<stdio.h>
#include<conio.h>
void main()
{
	char x[100];
	int i;
	printf("Enter the the string = ");
	gets(x);
	printf("0utput = ");
	for(i=0;x[i]!='\0';i++)
	{
		if(i%2==0)
		{
			printf("%c",x[i]);
		}
	}
	getch();
}