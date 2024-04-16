// WAP to check whether a number is Harsad Number or not.

/*
Harsad Number :
	If a number is divisible by the sum of its digits then 
	it will be known as a Harshad Number.
Example : 45, 54, 120, 156, 200
	45, 4+5=9, 45/9, rem=0
*/

#include<stdio.h>
#include<conio.h>
void main()
{
	int n, rem, s=0, x;
	printf("Entre the number = ");
	scanf("%d",&n);
	for(x=n;n>0;n=n/10)
	{
		rem=n%10;
		s=s+rem;
	}
	if(x%s==0)
	 printf("%d is Harshad No.",x);
	else
	 printf("%d is NOT Harshad No.",x);
	getch();
}