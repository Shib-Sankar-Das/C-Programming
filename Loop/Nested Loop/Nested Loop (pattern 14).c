/*

1 3 5 7 9
3 5 7 9
5 7 9
7 9
9

*/

#include<stdio.h>
#include<conio.h>
void main()
{
	int i, j;
	for(i=1;i<=9;i=i+2)
	{
		for(j=i;j<=9;j=j+2)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
	getch();
}