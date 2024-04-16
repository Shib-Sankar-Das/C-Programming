/*

A B C D
A B C
A B
A 

With out ASCII

1 2 3 4
1 2 3
1 2
1

*/

#include<stdio.h>
#include<conio.h>
void main()
{
	int i, j;
	char x='A';
	for(i=4;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("%c ",x);
			x++;
		}
		printf("\n");
		x='A';
	}
	getch();
}