//WAP to check greater by using ternary operator

#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	printf("Enter 2 No. = ");
	scanf("%d%d",&a,&b);
	c=(a>b)?a:b;
	printf("%d is the greater number.",c);
	getch();
}