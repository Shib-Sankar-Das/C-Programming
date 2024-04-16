/*

1
1 3
1 3 5
1 3 5 7
1 3 5 7 9

*/

#include<stdio.h>
#include<conio.h>
void main()
{
	int i, j;
	for(i=1;i<=9;i=i+2)
	{
		for(j=1;j<=i;j=j+2)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
	getch();
}