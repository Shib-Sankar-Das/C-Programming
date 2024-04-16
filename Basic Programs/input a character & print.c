//WAP to take input of a character & print the character

#include<stdio.h>
#include<conio.h>
void main()
{
	int x;
	printf("Enter the character = ");
	scanf("%c",&x);
	printf("The character is = %c \nASII value = %d",x,x);
	getch();
}