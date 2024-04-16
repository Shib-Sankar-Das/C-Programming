// WAP to input into a character array & print the array.

#include<stdio.h>
#include<conio.h>
void main()
{
	char x[10];
	int i;
	printf("Enter the string = ");
	gets(x);
	printf("The string = ");
	for(i=0;x[i]!='\0';i++)
	{
		printf("%c",x[i]);
	}
	getch();
}