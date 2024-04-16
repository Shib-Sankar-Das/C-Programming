/*

A A A A . . .
B B B . . .
C C . . .
D . . .
. . .
. .
n

With out ASCII

1 1 1 1 . . .
2 2 2 . . .
3 3 . . .
4 . . .
. . .
. .
n

*/

#include<stdio.h>
#include<conio.h>
void main()
{
	int i, j, n;
	char x='A', k;
	printf("Enter the number = ");
	scanf("%c",&k);
	n=(int)k;
	for(i=n-64;i>=1;i--)
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