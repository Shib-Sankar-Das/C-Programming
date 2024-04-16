//WAP to calculate area & perimeter of circle

#include<stdio.h>
#include<conio.h>
void main()
{
	float r, ar=1, pr=1;
	printf("Enter the radius = ");
	scanf("%f",&r);
	ar=3.14*r*r;
	pr=2*3.14*r;
	printf("Area of circle = %f\nPerimeter of circle = %f",ar,pr);
	getch();
}