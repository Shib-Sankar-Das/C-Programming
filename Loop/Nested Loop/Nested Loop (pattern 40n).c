/*

A
B B
C C C
D D D D
. . . . .
. . . . . .
. . . . . . .
n n n n n n n n

With ASCII

65
66 66
67 67 67
68 68 68 68
 .  .  .  .  .
 .  .  .  .  .  .
 .  .  .  .  .  .  .
 n  n  n  n  n  n  n  n

*/

#include<stdio.h>
#include<conio.h>
void main()
{
	int i, j, n;
	char x='A';
	printf("Enter the Letter = ");
	scanf("%c",&x);
	n=(int)x;
	for(i=65;i<=n;i++)
	{
		for(j=65;j<=i;j++)
		{
			printf("%c ",i);
		}
		printf("\n");
	}
	getch();
}