/*

A B C D . . . n
B C D . . . n
C D . . . n
D . . . n
. . . n
. . n
. n
n

With ASCII

65 66 67 68 . . . n
66 67 68 . . . n
67 68 . . . n
68 . . . n
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
	char x='A';
	printf("Enter the Letter = ");
	scanf("%c",&x);
	n=(int)x;
	for(i=65;i<=n;i++)
	{
		for(j=i;j<=n;j++)
		{
			printf("%c ",j);
		}
		printf("\n");
	}
	getch();
}