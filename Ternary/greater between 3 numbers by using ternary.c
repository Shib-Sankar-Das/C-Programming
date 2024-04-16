//WAP to check greater between 3 numbers by using ternary.

#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	printf("Enter 3 numbers = ");
	scanf("%d%d%d",&a,&b,&c);
	(a>b && a>c)?printf("1st No. %d is Greater",a):(b>c)?printf("2nd No. %d is Greater",b):(a==b && b==c)?printf("All are equal"):printf("3rd No. %d is Greater",c);
	getch();
}