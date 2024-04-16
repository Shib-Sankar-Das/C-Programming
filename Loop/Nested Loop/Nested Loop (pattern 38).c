/*

D C B A
D C B
D C
D

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
	char x='D';
	for(i=4;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("%c ",x);
			x--;
		}
		printf("\n");
		x='D';
	}
	getch();
}