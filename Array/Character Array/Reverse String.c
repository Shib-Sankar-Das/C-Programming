// WAP to reverse a string.

#include<stdio.h>
#include<conio.h>
void main()
{
	char x[100];
	int i;
	printf("Entre the string = ");
	gets(x);
	printf("Original String = ");
	for(i=0;x[i]!='\0';i++)
	{
		printf("%c",x[i]);
	}
	printf("\nReverse String = ");
	for(i=i-1;i>=0;i--)
	{
		printf("%c",x[i]);
	}
	getch();
}