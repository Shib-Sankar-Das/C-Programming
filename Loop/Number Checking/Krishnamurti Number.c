// WAP to check whether a number is Krishnamurthy Number or not.

/*
Krishnamurthy Number :
	A Krishnamurthy number is a number whose sum of the factorial of
	digits is equal to the number itself.
Example : 1, 2, 145, 40585
	145=1!+4!+5!=1+24+120=145
*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int n, rem, x, s=0, f=1, j;
    printf("Enter the No. = ");
    scanf("%d",&n);
    for(x=n;n>0;n=n/10)
    {
        rem=n%10;
    for(j=1;j<=rem;j++)
    {
        f=f*j;
    }
        s=s+f;
        f=1;
    }
    if(x==s)
        printf("%d is Krishnamurthy No.",x);
    else
        printf("%d is NOT Krishnamurthy No.",x );
    getch();
}
