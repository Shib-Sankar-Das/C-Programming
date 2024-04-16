//WAP to check greater between 3 numbers.

#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	printf("Enter 3 numbers = ");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b && a>c)
	printf("1st No. %d is Greater",a);
	else if(b>c)
	printf("2nd No. %d is Greater",b);
	else if(a==b && b==c)
	printf("All are equal");
	else
	printf("3rd No. %d is Greater",c);
	getch();
}