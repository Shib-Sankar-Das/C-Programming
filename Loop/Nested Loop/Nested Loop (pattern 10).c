/*

9
7 9
5 7 9
3 5 7 9
1 3 5 7 9

*/

#include<stdio.h>
#include<conio.h>
void main()
{
	int i, j;
	for(i=9;i>=1;i=i-2)
	{
		for(j=i;j<=9;j=j+2)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
	getch();
}