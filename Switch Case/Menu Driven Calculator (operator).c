//WAP to create a menu driven calculator by using switch case & operator

#include<stdio.h>
#include<conio.h>
void main()
{
	char x;
	float a,b;
	printf("Press 1 for Add\nPress 2 for Substract\nPress 3 Multiply\nPress 4 for Division\n");
	printf("Enter the choice = ");
	scanf("%c",&x);
	printf("Enter 2 No. = ");
	scanf("%f%f",&a,&b);
	switch (x)
	{
		case '+':
			printf("Addition = %f",a+b);
			break;
		case '-':
			printf("Substraction = %f",a-b);
			break;
		case '*':
			printf("Multiplication = %f",a*b);
			break;
		case '/':
			printf("Division = %f",a/b);
			break;
		default :
			printf("N/A");
	}
	getch();
}