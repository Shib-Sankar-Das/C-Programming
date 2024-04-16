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
    int i, n, f=0;
    printf("Enter the No. = ");
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
	f=1; 
	break;
        }
    }
    if(f==0)
        printf("\n%d is Prime No.",n);
    else
        printf("\n%d is NOT Prime No.",n);
    getch();
}
