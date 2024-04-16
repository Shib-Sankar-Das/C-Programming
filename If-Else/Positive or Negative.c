//WAP to check whether a no. is Positive or not.

#include<stdio.h>
#include<conio.h>
void main()
{
	int x;
	printf("Enter the number = ");
	scanf("%d",&x);
	if(x>0)
	printf("%d is Positive No.",x);
	else if(x==0)
	printf("%d is Nither Positive No. nor Negative No.",x);
	else
	printf("%d is Negative No.",x);
	getch();
}