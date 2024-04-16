// WAP to check whether a number is Pronic Number or not.

/*
Pronic Number :
	A pronic number is a number that is the product of two 
	consecutive integers.
Example : 0, 2, 6, 12, 20, 30, 42, 56, 72, 90, 110, 132, 156
	6 = 2*3
*/

#include<stdio.h>
#include<conio.h>
void main()
{
    int i, n, f=0;
    printf("Enter the No. = ");
    scanf("%d",&n);
    for(i=1;i<=n/2;i++)
    {
        if((i*(i+1))==n)
        {
 			f=1; 
			break;
        }
    }
    if(f==1)
        printf("%d is Pronic No.",n);
    else
        printf("%d is NOT Pronic No.",n);
    getch();
}
