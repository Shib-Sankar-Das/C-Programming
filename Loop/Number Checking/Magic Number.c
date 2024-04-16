// WAP to check whether a number is Magic Number or not.

/*
Magic Number :
	A Magic Number is one whose sum of the digits in the 
	number is equals to 10 or 1. (19, 1+9 =10)
Example : 10, 19, 28, 37, 46, 55, 64, 82, 91, 100
*/

#include<stdio.h>
#include<conio.h>
void main()
{
	int n, x, s=0, rem;
	printf("Enter the number = ");
	scanf("%d",&n);
	for(x=n;n>0;n=n/10)
	{
		rem=n%10;
		s=s+rem;
	}
	 if(s==10)
	 printf("%d is a Neon Number",x);
	 else if(s==1)
	 printf("%d is a Neon Number",x);
	 else
	 printf("%d is NOT Neon Number",x);
	 getch();
}