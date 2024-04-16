//WAP to convert months to days

#include<stdio.h>
#include<conio.h>
void main()
{
	int d, m;
	printf("Enter the months = ");
	scanf("%d",&m);
	d=m*30;
	printf("Days = %d",d);
	getch();
}