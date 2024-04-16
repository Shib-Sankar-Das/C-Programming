//WAP to check whether a no. is Positive or not.

#include<stdio.h>
#include<conio.h>
void main()
{
	int x;
	printf("Enter the number = ");
	scanf("%d",&x);
	if(x==0)
	printf("%d is Nither Even No. nor Odd No.",x);
	else if(x%2==0)
	printf("%d is Even No.",x);
	else
	printf("%d is Odd No.",x);
	getch();
}