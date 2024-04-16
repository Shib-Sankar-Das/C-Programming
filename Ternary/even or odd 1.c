//WAP to check whether a no. is even or odd by using ternary operator

#include<stdio.h>
#include<conio.h>
void main()
{
	int x;
	printf("Enter the number = ");
	scanf("%d",&x);
	(x==0)?printf("%d Neither even nor odd no.",x):(x%2==0)?printf("%d is Even No.",x):printf("%d is Odd No.",x);
	getch();
}