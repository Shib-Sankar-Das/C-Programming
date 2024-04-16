//WAP to check whether a no. is even or odd by using ternary operator

#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y;
	printf("Enter the number = ");
	scanf("%d",&x);
	y=(x==0)?2:(x%2==0)?1:0;
	if(y==2)
		printf("Neither even nor odd no.");
	else if(y==1)
		printf("Even No.");
	else
		printf("Odd No.");
	getch();
}