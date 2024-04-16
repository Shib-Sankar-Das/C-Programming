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
#include<math.h>
void main()
{
	int n, x, s=0, c=0, rem, p;
	printf("Enter the number = ");
	scanf("%d",&n);
	for(x=n;n>0;n=n/10)
	{
		c++;
	}
	for(n=x;n>0;n=n/10)
	{
		rem=n%10;
		p=pow(rem,c);
		s=s+p;
	}
	 if(s==x)
	 printf("%d is a Armstrong Number",x);
	 else
	 printf("%d is NOT Armstrong Number",x);
	 getch();
}