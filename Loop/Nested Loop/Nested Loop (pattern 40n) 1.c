/*

A
B B
C C C
D D D D
. . . . .
. . . . . .
. . . . . . .
n n n n n n n n

With out ASCII

1
2 2
3 3 3
4 4 4 4
. . . . .
. . . . . .
. . . . . . .
n n n n n n n n

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
	for(i=1;i<=n-64;i++)
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