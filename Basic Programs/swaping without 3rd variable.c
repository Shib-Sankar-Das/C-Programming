//WAAP to swap 2 no. without using 3rd variable

#include<stdio.h>
#include<conio.h>
void main()
{
	int a, b;
	printf("Enter 2 no. = ");
	scanf("%d%d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("A = %d B = %d",a,b);
	getch();
} 