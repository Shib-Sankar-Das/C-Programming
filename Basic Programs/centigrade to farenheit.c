//WAP to convert centigrade to farenheit

#include<stdio.h>
#include<conio.h>
void main()
{
	float c, f;
	printf("Enter the centigrade value = ");
	scanf("%f",&c);
	f=(9*c+160)/5;
	printf("Farenheit = %f",f);
	getch();
}