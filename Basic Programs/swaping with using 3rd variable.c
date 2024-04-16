//WAAP to swap 2 no. with using 3rd variable

#include<stdio.h>
#include<conio.h>
void main()
{
	int a, b, c;
	printf("Enter 2 no. = ");
	scanf("%d%d",&a,&b);
	c=a;
	a=b;
	b=c;
	printf("A = %d B = %d",a,b);
	getch();
} 