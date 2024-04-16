/*

n
. n
. . n
. . . n
9 . . . n
7 9 . . . n
5 7 9 . . . n
3 5 7 9 . . . n
1 3 5 7 9 . . . n

*/

#include<stdio.h>
#include<conio.h>
void main()
{
	int i, j, n;
	printf("Enter the number = ");
	scanf("%d",&n);
	for(i=n;i>=1;i=i-2)
	{
		for(j=i;j<=n;j=j+2)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
	getch();
}