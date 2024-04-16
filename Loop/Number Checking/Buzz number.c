//WAP to check whether a no. is buzz or not.

/*
Buzz Number :
	Buzz numbers are those numbers that are divisible
	by 7 or end with 7.
Example : 57, 28, 27, 657
	57%10=7
	28%7=0
*/

#include<stdio.h>
#include<conio.h>
void main()
{
	int x;
	printf("Enter the no. = ");
	scanf("%d",&x);
	if(x%7==0 || x%10==7)
		printf("The no. %d Buzz no.",x);
	else
		printf("The no. %d not Buzz no.",x);
	getch();
}
