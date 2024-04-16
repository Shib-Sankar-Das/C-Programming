//WAP to check whether a no. is Poitive or not by using ternary operator

#include<stdio.h>
#include<conio.h>
void main()
{
	int x;
	printf("Enter the number = ");
	scanf("%d",&x);
	(x>0)?printf("%d is Positive No.",x):(x==0)?printf("%d Neither Positive nor Negative no.",x):printf("%d is Negative no.",x);
	getch();
}