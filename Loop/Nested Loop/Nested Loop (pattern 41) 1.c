/*

A A A A
B B B
C C
D

With out ASCII

1 1 1 1
2 2 2
3 3
4

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
		}
		printf("\n");
		x++;
	}
	getch();
}