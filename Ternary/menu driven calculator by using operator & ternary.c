//WAP to create a menu driven calculator by using operator & ternary

#include<stdio.h>
#include<conio.h>
void main()
{
	char x;
	float a,b;
	printf("Press + for Addition\nPress - for Substraction\nPress * for Multiply\nPress / for Division\n");
	printf("Enter the opreator = ");
	scanf("%c",&x);
	printf("Enter 2 No. = ");
	scanf("%f%f",&a,&b);
	(x=='+')?printf("Addition = %f",a+b):(x=='-')?printf("Substraction = %f",a-b):(x=='*')?printf("Multiplication = %f",a*b):(x=='/')?printf("DiVision = %f",a/b):printf("Wrong choice!!");
	getch();
}