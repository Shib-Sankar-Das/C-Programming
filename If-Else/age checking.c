//WAP to age checking

#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	printf("Enter the age = ");
	scanf("%d",&a);
	if(a>=0 && a<=6)
	printf("Infant");
	else if(a>6 && a<=12)
	printf("Child");
	else if(a>12 && a<=18)
	printf("Teenager");
	else if(a>18 && a<=35)
	printf("Young Aged");
	else if(a>35 && a<=60)
	printf("Middle Aged");
	else if(a>60 && a<=100)
	printf("Old Age");
	else if(a<0)
	printf("You Idiot!!!N/A here");
	else
	printf("Go to Hell");
	getch();
}