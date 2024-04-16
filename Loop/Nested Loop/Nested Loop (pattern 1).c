/*

1 2 3 4
2 3 4
3 4
4

*/

#include<stdio.h>
#include<conio.h>
void main()
{
	int i, j;
	for(i=1;i<=4;i++)
	{
		for(j=i;j<=4;j++)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
	getch();
}