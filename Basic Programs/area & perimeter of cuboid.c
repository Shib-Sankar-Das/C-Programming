//WAP to calculate area & perimeter of cuboid

#include<stdio.h>
#include<conio.h>
void main()
{
	int len, br, h, ar, pr;
	printf("Enter the length & breadth & widht = ");
	scanf("%d%d%d",&len,&br,&h);
	ar=2*(len*br+len*h+br*h);
	pr=4*(len+br+h);
	printf("Area of cuboid = %d\nPerimeter of cuboid = %d",ar,pr);
	getch();
}