// WAP to check whether a number is Disarium Number or not.

/*
Disarium Number :
	A number is called Disarium if sum of its digits powered 
	with their respective positions is equal to the number itself.
Example :  89, 135, 518
	89=9^2+8^1= 89
	135=5^3+3^2+1^1
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int n, x, rem, c=0, p, s=0;
	printf("Enter the Number = ");
	scanf("%d", &n);
	for(x=n; n>0; n=n/10)
	{
		c++;
	}
	for(n=x; n>0; n=n/10)
	{
		rem=n%10;
		p=pow(rem,c);
		s=s+p;
		c--;
	}
	if(x==s)
	printf("%d is Disarium Number",x);
	else
	printf("%d is NOT Disarium Number",x);
	getch();
}