//WAP to check whether a yrar is leap year or not.
#include<stdio.h>
#include<conio.h>
void main()
{
	int y;
	printf("Enter the year = ");
	scanf("%d",&y);
	if(y%4==0)
		printf("The Year %d is leap year",y);
	else
		printf("The Year %d is not leap year",y);
	getch();
}