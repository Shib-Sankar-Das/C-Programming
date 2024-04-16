//WAP to convert days to years

#include<stdio.h>
#include<conio.h>
void main()
{
	int d, m, y;
	printf("Enter the days = ");
	scanf("%d",&d);
	y=d/365;
	d=d%365;
	m=d/30;
	d=d%30;
	printf("Years = %d Months = %d Days = %d",y,m,d);
	getch();
}