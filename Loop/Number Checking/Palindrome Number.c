// WAP to check whether a number is Palindrome Number or not.

/*
Palindrome Number :
	A palindromic number is the same number that is read forward and backwards. Reverse = = Original.
Example : 1, 2, 3, 44, 55, 66, 121, 232, 323, 414, 313
*/

#include<stdio.h>
#include<conio.h>
void main()
{
	int n, rem, rev=0, x;
	printf("Enter the number = ");
	scanf("%d",&n);
	for(x=n;n>0;n=n/10)
	{
	  rem=n%10;
	  rev=(rev*10)+rem;
	}
	if(x==rev)
	printf("\n%d is Palindrome No.",n);
	else
	printf("\n%d is NOT Palindrome No.",n);
	getch();
}