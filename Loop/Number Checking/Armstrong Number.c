// WAP to check whether a number is Armstrong Number or not.

/*
Armstrong Number :
	An Armstrong number is one whose sum of digits raised to the 
	power of the number of digits in the number equals the number itself.
Example : 153, 370, 371, 407, 1634
	371 = 1^3+7^3+3^3
	1634 = 1^4+6^4+3^4+4^4
*/

#include<stdio.h>
#include<conio.h>
void main()
{
	int n, rem, s=0, x;
	printf("Enter the number = ");
	scanf("%d",&n);
	for(x=n;n>0;n=n/10)
	{
	  rem=n%10;
	  s=s+(rem*rem*rem);
	}
	if(x==s)
	printf("%d is Armstrong No.",x);
	else
	printf("%d is NOT Armstrong No.",x);
	getch();
}