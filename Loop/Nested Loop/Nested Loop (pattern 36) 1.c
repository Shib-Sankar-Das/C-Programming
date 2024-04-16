/*

D
D C 
D C B
D C B C

With ASCII

68
68 67
68 67 66
68 67 66 65

*/

#include<stdio.h>
#include<conio.h>
void main()
{
	int i, j;
	for(i=68;i>=65;i--)
	{
		for(j=68;j>=i;j--)
		{
			printf("%c ",j);
		}
		printf("\n");
	}
	getch();
}