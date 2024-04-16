/*

1
1 0
1 0 1
1 0 1 0

*/

#include<stdio.h>
#include<conio.h>
void main()
{
	int i, j;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",j%2);
		}
		printf("\n");
	}
	getch();
}