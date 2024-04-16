/*

A
B B
C C C
D D D D

With ASCII

65
66 66
67 67 67
68 68 68 68

*/

#include<stdio.h>
#include<conio.h>
void main()
{
	int i, j;
	for(i=65;i<=68;i++)
	{
		for(j=65;j<=i;j++)
		{
			printf("%c ",i);
		}
		printf("\n");
	}
	getch();
}