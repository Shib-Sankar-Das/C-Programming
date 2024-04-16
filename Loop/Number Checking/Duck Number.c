// WAP to check whether a number is Duck Number or not.

/*
Duck Number : 
A Duck number is a positive number which has zeroes present in it.
Example : 450, 504, 120, 1506, 200
*/

#include<stdio.h>
#include<conio.h>
void main()
{
	int n, x, f=0;
	printf("Enter the number = ");
	scanf("%d",&n);
	for(x=n;n>0;n=n/10)
	{
		if(n%10==0)
		{
			f=1;
			break;
		}
	}
	if(f==1)
	printf("%d is Duck No.",x);
	else
	printf("%d is NOT Duck No.",x);
	getch();
}
