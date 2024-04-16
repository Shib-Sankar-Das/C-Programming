// WAP to check whether a number is Abundant Number or not.

/*
Abundant Number : 
	An abundant number or excessive number is a number for 
	which the sum of its proper divisors is greater than the 
	number, except the number itself. 
Example : 12, 18, 20, 24, 30, 36, 40
	12 -> 1, 2, 3, 4, 6
	1+2+3+4+6=16
	16>12
*/

#include<stdio.h>
#include<conio.h>
void main()
{
    int i, n, s=0;
    printf("Enter the No. = ");
    scanf("%d",&n);
    for(i=1;i<=n/2;i++)
    {
        if(n%i==0)
            s=s+i;
    }
    if(s>n)
        printf("%d is Abundant No.",n);
    else
        printf("%d is NOT  Abundant No.",n);
    getch();
}
