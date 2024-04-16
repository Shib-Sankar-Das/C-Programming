/*

9 
9 7
9 7 5
9 7 5 3
9 7 5 3 1

*/

#include<stdio.h>
#include<conio.h>
void main()
{
	int i, j;
	for(i=9;i>=1;i=i-2)
	{
		for(j=9;j>=i;j=j-2)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
	getch();
}