/*

1
2 2
3 3 3
4 4 4 4
. . . . .
. . . . . .
. . . . . . .
n n n n n n n n

*/

#include<stdio.h>
#include<conio.h>
void main()
{
	int i, j, n;
	printf("Enter the number = ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",i);
		}
		printf("\n");
	}
	getch();
}