/*

A
A B
A B C
A B C D

With out ASCII

1
1 2
1 2 3
1 2 3 4

*/

#include<stdio.h>
#include<conio.h>
void main()
{
	int i, j;
	char x='A';
	for(i=1;i<=4;i++)
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