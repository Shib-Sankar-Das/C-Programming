/*

1
1 2 1
1 2 3 2 1
1 2 3 4 3 2 1

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
			printf("%d",j);
		}
		for(j=(i-1);j>=1;j--)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	getch();
}