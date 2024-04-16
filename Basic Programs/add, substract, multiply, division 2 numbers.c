//WAP to add, substract, multiply, divide two no. dynamically.

#include<stdio.h>
#include<conio.h>
void main()
{
	int a, b, c, s, m, d;
	printf("Enter the 1st Integer No. = ");
	scanf("%d",&a);
	printf("Enter the 2nd Integer No. = ");
	scanf("%d",&b);
	c=a+b;
	s=a-b;
	m=a*b;
	d=a/b;
	printf("Addition = %d\n",c);
	printf("Substraction = %d\n",s);
	printf("Multiplication = %d\n",m);
	printf("Division = %d\n",d);
	getch();
}