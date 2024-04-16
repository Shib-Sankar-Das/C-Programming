//WAP to calculate interest

#include<stdio.h>
#include<conio.h>
void main()
{
	char x;
	int b, i;
	printf("Enter the gender = ");
	scanf("%c",&x);
	printf("Enter the balance = ");
	scanf("%d",&b);
	i=((x=='M') || (x=='m') && b>5000)?(b*2)/100:((x=='F') || (x=='f') && b>=3000 && b<=5000)?(b*5)/100:((x=='T') || (x=='t') && b>2000)?(b*8)/100:0;
	printf("Interest = %d Principle Amount = %d",i,b+i);
	getch();
}