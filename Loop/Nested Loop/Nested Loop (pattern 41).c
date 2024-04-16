/*

A A A A
B B B
C C
D

With ASCII

65 65 65 65
66 66 66 
67 67 
68

*/

#include<stdio.h>
#include<conio.h>
void main()
{
	int i, j;
	for(i=65;i<=68;i++)
	{
		for(j=68;j>=i;j--)
		{
			printf("%c ",i);
		}
		printf("\n");
	}
	getch();
}