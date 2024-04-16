// WAP to count the length of a string.

#include<stdio.h>
#include<conio.h>
void main()
{
	char x[100];
	int i, len=0;
	printf("Enter the String = ");
	gets(x);
	for(i=0;x[i]!='\0';i++)
	{
		len++;
	}
	printf("length = %d",len);
	getch();
}