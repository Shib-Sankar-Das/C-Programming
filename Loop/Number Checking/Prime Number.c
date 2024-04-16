// WAP to check whether a number is Prime Number or not.

/*
Prime Number :
A prime number is a whole number greater than 1 whose only factors are 1 and itself.
Example : 3, 5, 7, 11, 97
*/

#include<stdio.h>
#include<conio.h>
void main()
{
    int i, n, c=0;
    printf("Enter the No. = ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
	c++;
        }
    }
    if(c==2)
        printf("%d is Prime No.",n);
    else
        printf("%d is NOT Prime No.",n );
    getch();
}
