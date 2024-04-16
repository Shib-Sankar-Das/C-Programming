/*

D C B A
D C B
D C
D

With ASCII

68 67 66 65
68 67 66
68 67
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
			printf("%c ",j);
		}
		printf("\n");
	}
	getch();
}