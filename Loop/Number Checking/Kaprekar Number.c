// WAP to check whether a number is Kaprekar Number or not.

/*
Kaprekar Number :
	A Kaprekar number is a number whose square when divided 
	into two parts and such that sum of parts is equal to the 
	original number and none of the parts has value 0.
Example : 1, 9, 45, 55, 99, 297, 703
	92 = 81, 8+1=9
	452 = 2025, 20+25=45
	2972 = 88209, 88+209=297
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int n, p, x, c=0, b=0, rem, s=0, y;
	printf("Enter the number = ");
	scanf("%d",&n);
	p=pow(n,2);
	for(x=n;n>0;n=n/10)
	{
		c++;
	}
	b=pow(10,c);
	for(y=p;p>=y;p=p/b)
	{
		rem=p%b;
	}
	s=rem+p;
	if(s==x)
	 printf("%d is karpekar No.",x);
	else
	 printf("%d is NOT karpekar No.",x);
	 getch();
}