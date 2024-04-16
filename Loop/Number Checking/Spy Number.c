// WAP to check whether a number is Spy Number or not.

/*
Spy Number :
	A number is said to be a Spy number if the sum of all 
	the digits is equal to the product of all digits.
Example : 123, 213, 321, 1421, 1142
	123, 231, 321
	3+2+1=6, 3*2*1=6
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int n, x, s=0, rem, p=1;
	printf("Enter the number = ");
	scanf("%d",&n);
	for(x=n;n>0;n=n/10)
	{
		rem=n%10;
		s=s+rem;
		p=p*rem;
	}
	if(s==p)
	printf("%d is Spy No.",x);
	else
	printf("%d is NOT Spy No.",x);
	getch();
}