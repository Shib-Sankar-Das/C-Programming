// WAP to copy a string from another string.

#include<stdio.h>
#include<conio.h>
void main()
{
	char x[50], y[50] = "";
	int i;
	printf("Enter the string = ");
	gets(x);
	printf("1st string = %s\n",x);
	printf("2st string = %s\n",y);
	for(i=0;x[i]!='\0';i++)
	{
		y[i] = x[i];
	}
	y[i] = '\0';
	for(i=0;y[i]!='\0';i++)
	{
		printf("%c",y[i]);
	}
	getch();
}