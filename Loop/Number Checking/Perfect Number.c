//WAP to check weather a number is Perfect Number or not.

/*
Perfect Number :
	A positive integer that is equal to the sum of its proper divisors or factors except itself.
Example : 6, 28, 496
	6 = 1+2+3
	28 = 1+2+4+7+14
*/

#include<stdio.h>
#include<conio.h>
void main()
{
	int i, n, s=0;
	printf("Enter the number = ");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			printf("%d, ",i);
			s=s+i;
		}
	}
	if(s==n)
	printf("\n%d is Perfect No.",n);
	else
	printf("\n%d is NOT Perfect No.",n);
	getch();
}