/*

D
D C 
D C B
D C B C

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
	char x='D';
	for(i=1;i<=4;i++)
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