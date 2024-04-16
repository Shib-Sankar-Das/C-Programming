//WAP to calculate avarage of 3 no.

#include<stdio.h>
#include<conio.h>
void main()
{
	int a, b, c;
	float s, avg;
	printf("Enter 3 no. = ");
	scanf("%d%d%d",&a,&b,&c);
	s=a+b+c;
	avg=s/3;
	printf("Sum = %f\nAverage = %f",s,avg);
	getch();
}