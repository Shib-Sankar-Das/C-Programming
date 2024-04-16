/*

1 1 1 1
2 2 2
3 3
4

*/

#include<stdio.h>
#include<conio.h>
void main()
{
	int i, j;
	for(i=1;i<=4;i++)
	{
		for(j=4;j>=i;j--)
		{
			printf("%d ",i);
		}
		printf("\n");
	}
	getch();
}