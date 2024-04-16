//WAP to check greater between two numbers.

#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	printf("Enter 2 numbers = ");
	scanf("%d%d",&a,&b);
	if(a>b)
	printf("1st No. %d is Greater",a);
	else if(a==b)
	printf("Both are equal");
	else
	printf("2nd No. %d is Greater",b);
	getch();
}