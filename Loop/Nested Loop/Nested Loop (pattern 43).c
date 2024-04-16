/*

A B C D
E F G H
I J K L
M N O P

With out ASCII

65 66 67 68
69 70 71 72
73 74 75 76
77 78 79 80

*/

#include<stdio.h>
#include<conio.h>
void main()
{
	int i, j;
	char x='A';
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=4;j++)
		{
			printf("%c ",x);
			x++;
		}
		printf("\n");
	}
	getch();
}