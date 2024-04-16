//WAP to convert days to months

#include<stdio.h>
#include<conio.h>
void main()
{
	int d, m;
	printf("Enter the days = ");
	scanf("%d",&d);
	m=d/30;
	d=d%30l;
	printf("Months = %d Days = %d",m,d);
	getch();
}