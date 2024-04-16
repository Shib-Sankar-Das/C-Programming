/*

1 3 5 7 9 . . . n
3 5 7 9 . . . n
5 7 9 . . . n
7 9 . . . n
9 . . . n
. . . n
. . n
. n
n

*/

#include<stdio.h>
#include<conio.h>
void main()
{
	int i, j, n;
	printf("Enter the number = ");
	scanf("%d",&n);
	for(i=1;i<=n;i=i+2)
	{
		for(j=i;j<=n;j=j+2)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
	getch();
}