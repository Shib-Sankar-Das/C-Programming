//WAP to lower case to upper case or vice versa.

#include<stdio.h>
#include<conio.h>
void main()
{
	char x;
	printf("Enter the character = ");
	scanf("%c",&x);
	if(x>=97 && x<=122)
	printf("%c",x-32);
	else if(x>65 && x<=90)
	printf("%c",x+32);
	else
	printf("%c",x);
	getch();
}