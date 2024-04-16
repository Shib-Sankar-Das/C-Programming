// WAP to check whether a number is Neon Number or not.

/*
Neon Number :
	A neon number is a number where the sum of digits of square of the number is equal to the number.
Example : 0, 1, 9
	02 = 0, 0 = 0
	12 = 1, 1 = 1
	92 = 81, 8+1=9
	We get only three neon numbers between 0 to 100000. So, there is a probability
	that 1 Trillion also includes 0, 1, and 9 as the neon numbers.
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int n, x, s=0, rem, p;
	printf("Enter the number = ");
	scanf("%d",&n);
    p=pow(n,2);
	for(x=n;p>0;p=p/10)
	{
		rem=p%10;
		s=s+rem;
	}
	 if(s==x)
	 printf("%d is a Neon Number",x);
	 else
	 printf("%d is NOT Neon Number",x);
	 getch();
}