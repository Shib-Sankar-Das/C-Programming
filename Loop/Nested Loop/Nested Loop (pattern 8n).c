/*

n
. n
. . n
. . . n
4 . . . n
3 4 . . . n
2 3 4 . . . n
1 2 3 4 . . . n

*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int i, j, n;
	printf("Enter the number = ");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		for(j=i;j<=n;j++)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
	getch();
}