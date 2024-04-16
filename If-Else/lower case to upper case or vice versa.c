//WAP to lower case to upper case or vice versa.

#include<stdio.h>
#include<conio.h>
void main()
{
	char x;
	printf("Enter the character = ");
	scanf("%c",&x);
	if(x>='a' && x<='z')
	printf("%c",x-32);
	else if(x>'A' && x<='Z')
	printf("%c",x+32);
	else
	printf("%c",x);
	getch();
}