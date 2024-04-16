//WAP to create a menu driven calculator by using operator & if-else

#include<stdio.h>
#include<conio.h>
void main()
{
	char x;
	float a,b;
	printf("Press + for Addition\nPress - for Substraction\nPress * for Multiply\nPress / for Division\n");
	printf("Enter the opreator = ");
	scanf("%c",&x);
	printf("\nEnter 2 No. = ");
	scanf("%f%f",&a,&b);
	if(x=='+')
	printf("Addition = %f",a+b);
	else if(x=='-')
	printf("Substraction = %f",a-b);
	else if(x=='*')
	printf("Multiplication = %f",a*b);
	else if(x=='/')
	printf("DiVision = %f",a/b);
	else
	printf("N/A");
	getch();
}
