/*

0
1 1
0 0 0
1 1 1 1

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
			if(i%2==1)
			printf("0 ");
			else
			printf("1 ");
		}
		printf("\n");
	}
	getch();
}