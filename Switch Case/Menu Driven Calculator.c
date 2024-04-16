//WAP to create a menu driven calculator by using switch case

#include<stdio.h>
#include<conio.h>
void main()
{
	int x;
	float a,b;
	printf("Press 1 for Add\nPress 2 for Substract\nPress 3 Multiply\nPress 4 for Division\n");
	printf("Enter the choice = ");
	scanf("%d",&x);
	switch (x)
	{
		case 1:
			printf("Enter 2 No. = ");
			scanf("%f%f",&a,&b);
			printf("Addition = %f",a+b);
			break;
		case 2:
			printf("Enter 2 No. = ");
			scanf("%f%f",&a,&b);
			printf("Substraction = %f",a-b);
			break;
		case 3:
			printf("Enter 2 No. = ");
			scanf("%f%f",&a,&b);
			printf("Multiplication = %f",a*b);
			break;
		case 4:
			printf("Enter 2 No. = ");
			scanf("%f%f",&a,&b);
			printf("Division = %f",a/b);
			break;
		default :
			printf("N/A");
	}
	getch();
}