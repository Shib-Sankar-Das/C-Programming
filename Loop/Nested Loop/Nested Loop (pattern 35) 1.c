/*

A
A B
A B C
A B C D

With ACSII

65
65 66
65 66 67
65 66 67 68

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
			printf("%c ",j);
		}
		printf("\n");
	}
	getch();
}