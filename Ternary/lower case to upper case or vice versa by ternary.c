//WAP to lower case to upper case or vice versa by ternary.

#include<stdio.h>
#include<conio.h>
void main()
{
	char x;
	printf("Enter the character = ");
	scanf("%c",&x);
	(x>='a' && x<='z')?printf("%c",x-32):(x>'A' && x<='Z')?printf("%c",x+32):printf("%c",x);
	getch();
}