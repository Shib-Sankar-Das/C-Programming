//WAP to calculate area & perimeter of rectangle

#include<stdio.h>
#include<conio.h>
void main()
{
	int len, br, ar, pr;
	printf("Enter the length & breadth = ");
	scanf("%d%d",&len,&br);
	ar=len*br;
	pr=2*(len+br);
	printf("Area of rectangle = %d\nPerimeter of rectangle = %d",ar,pr);
	getch();
}