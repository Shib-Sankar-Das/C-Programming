/*

A
B B
C C C
D D D D

With out ASCII

1
2 2
3 3 3
4 4 4 4

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
		}
		printf("\n");
		x++;
	}
	getch();
}