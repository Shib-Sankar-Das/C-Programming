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
	switch(x%7==0 || x%10==7)
	{
		case 1 :
			printf("%d is Buzz no.",x);
			break;
		case 0 :
			printf("%d is not Buzz no.",x);
			break;
	}
	getch();
}
