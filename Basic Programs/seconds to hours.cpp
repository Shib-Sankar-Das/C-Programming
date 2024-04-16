//WAP to convert seconds to hours

#include<stdio.h>
#include<conio.h>
void main()
{
	int s, h, m;
	printf("Enter the seconds = ");
	scanf("%d",&s);
	h=s/3600;
	s=s%3600;
	m=s/60;
	s=s%60;
	printf("Hour = %d Minute = %d Second = %d",h,m,s);
	getch();
}